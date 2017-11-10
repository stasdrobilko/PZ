#include "sniffer.h"
#include "ui_sniffer.h"
#include "QFileDialog"
#include "pcap.h"
#include "QDebug"
#include "QFile"
sniffer::sniffer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::sniffer)
{
    ui->setupUi(this);
}

sniffer::~sniffer()
{
    delete ui;
}

void sniffer::on_pushButton_clicked()
{
  QString file=QFileDialog::getOpenFileName(this,"open pcap file");
  const char *poket=file.toStdString().c_str();
  pcap_t *trafik;
  trafik=pcap_open_offline(poket,nullptr);
  struct pcap_pkthdr *header;
  const u_char *data;
  u_int packetCOUNT=0;
  FILE *fil;
  fil=fopen("inf.txt","w");
  int all_packets=0;
  while(int value=pcap_next_ex(trafik,&header,&data)>=0)
  {
      all_packets++;
      fprintf(fil,"packets #%i\n",++packetCOUNT);
      fprintf(fil,"packets %d bytes\n",header->caplen);
      fprintf(fil,"packets %d bytes\n",header->len);
      printf("\n\n");
  }
      QFile f("inf.txt");
      if((f.exists())&&(f.open(QIODevice::WriteOnly)))
      {
     QString out;
     QTextStream str(&f);

     qDebug()<<str.readAll();
      }
      pcap_close(trafik);
      f.close();
  }

