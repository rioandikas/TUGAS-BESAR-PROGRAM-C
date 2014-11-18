#include <stdio.h>
#include <windows.h>
void menu();
void proses(int pil);
int i,Y;
char op,cb;


int main()
{
    int pil,ulang;
    welcome();

    printf("********************************************************************************\n");
    printf("                                     Program\n");
    printf("                               Konsultasi Virtual ver.01\n");
    printf("********************************************************************************");
    menu();
    printf("\n\nSilahkan masukan pilihan(1,2,3,4): ");
    scanf("%i",&pil);
    proses(pil);
    printf ("Apakah anda masih ingin berkonsultasi ( 1=Yes / 2=No )?");
    scanf  ("%i",&ulang);
    if(ulang==1)
    {
        system("cls");
        while (ulang==1)
        {
            menu();
            printf("\n\nLetak keluhan terdapat di  : ");
            scanf("%i",&pil);
            proses(pil);
            printf ("Masih ingin berkonsultasi ( 1=Yes / 2=No )?");
            scanf  ("%i",&ulang);
        }
    }
    else
    {
        printf("Konsultasi Berakhir\n");
    }
    system ("pause");
}
void welcome()
{
    int key;
    system("COLOR F0");
}
 void menu()
 {
       printf("\nKeluhan terletak pada:\n");
       printf("1. Tubuh\n");
       printf("2. Mata\n");
       printf("3. Telinga\n");
       printf("--------------------------------------------------------------------------------");
       printf("4.tentang");
}
void proses(int pil)
{
    switch (pil)
    {
        case 1:   ///tubuh
            {
                system("cls");
                printf("ditandai dengan:\n");
                printf("\n1.suhu tubuh tinggi\n");
                printf("\n2.sakit perut\n");
                printf("\nsilahkan pilih(1,2): ");
                scanf("%s",&cb);
                switch (cb)
                {
                    case '1' : ///suhu tubuh tinggi
                    {
                        system("cls");
                        printf("Suhu tubuh tinggi disertai dengan:\n");
                        printf("\na.kepala pusing\n");
                        printf("\nb.meriang\n");
                        printf("\nc.batuk-batuk\n");
                        printf("Pilih keluhan(a,b,c) = ");
                        scanf("%s",&op);
                        switch (op)
                        {
                            case 'a' :
                            {
                                printf("                            Gejala Berpotensi:\n");

                                printf("\n1.Demam:\nBiasanya demam sudah bisa diketahui sehari atau dua hari sebelum demam itu timbul dimulai dengan suhu tubuh yang lebih dari 37 derajat celcius dan sebagainya,biasanya disebabkan baik oleh bakteri jahat maupun virus. Namun seharusnya demam biasa tidak lebih dari 2 hari karena pada dasarnya demam merupakan hasil dari tubuh yang kecapean maupun karena terlalu lama tersengat sinar matahari, solusinya sangat banyak mulai dari yang tradisional hingga modern.\tSecara tradisional anda dapat mencampurkan madu dengan air hangat lalu diminum setiap 5 jam.\t PERINGATAN: Bila tidak kunjung sembuh segera konsultasikan ke dokter\n");

                                printf("\n2.Panas dalam:\nHampir sama dengan demam namun lebih cenderung dikarenakan kecapean maupun kekurangan vitamin tertentu, seharusnya gejala ini tidak perlu diberikan perhatian yang sangat intensif, cukup denngan meminum obat kimia dari apotik terdekat maupun dengan cara meminum ekstrak dari akar tumbuhan alang-alang maupun selasih yang dicampur dengan air hangat dan jeruk nipis\n");

                                printf("\n3.Dehidrasi:\nDidasari oleh kekurangan cairan di dalam tubuh, dehidrasi harus segera ditangani seintensif mungkin karena manusia setidaknya membutuhkan 1,5 liter perharinya apabila dibiarkan kendala serius sangat mungkin terjadi. Biasanya gejala ini dimulai dengan demam serta mual-mual. Dehidrasi dibagi menjadi dua dehidrasi ringan maupun sedang dehidrasi ringan dapat diatasi dengan mingisi tubuh dengan cairan secukupnya namun, jika dehidrasi sedang harus diatasi oleh tenaga medis yang profesional\n");

                            }
                            break;
                            case 'b' :
                            {
                                printf("                   Gejala Berpotensi apabila panas lebih dari 2 hari:\n");

                                printf("\n1.Demam Berdarah:\nDemam yang berkepanjangan diikuti dengan badan yang selalu menggigil pada malam hari sangat berpotensi gejala DBD maupun malaria, gejala ini menyerang trombhosit ssehingga jumllah thrombosit di dalam tubuh mencapai titik terendahnya dan sangat  beresiko fatal bahkan kematian. Solusinya banyak yang percaya jika DBD bisa disembuhkan dengan mengganti cairan tubuh secara terus menerus agar Virus yang di sebabkan oleh DBD dapat dikeluarkan. Jadi, perbanyak minum air putih dan segera periksakan ke dokter untuk di tangani secara profesional\n");

                                printf("\n2.Gejala Tifus:\nHampir sama dengan DBD, tifus juga ditandai dengan suhu tubuh yang tinggi dan meriang, gejala ini biasanya terjadi dikarenakan penderita kurang steril dalam memilih apa yang akan dikonsumsinya dan memilih makanan yang mengandung banyak purin seperti bayam,kangkung,sarde,telur dan daging sehingga bakteri salmonela typhi menginfeksi tubuh. Pertolongaan pertama yang harus dilakukan sebelum ditindak lanjuti rumah sakit adalah dengan diberikan obat penerun panas  \n");

                            }
                            break;
                            case 'c' :
                            {
                                printf("                            Gejala Berpotensi:\n");
                                printf("\n1.Deman:\nBiasanya demam sudah bisa diketahui sehari atau dua hari sebelum demam itu timbul dimulai dengan suhu tubuh yang lebih dari 37 derajat celcius dan sebagainya,biasanya disebabkan baik oleh bakteri jahat maupun virus. Namun seharusnya demam biasa tidak lebih dari 2 hari karena pada dasarnya demam merupakan hasil dari tubuh yang kecapean maupun karena terlalu lama tersengat sinar matahari, solusinya sangat banyak mulai dari yang tradisional hingga modern.\tSecara tradisional anda dapat mencampurkan madu dengan air hangat lalu diminum setiap 5 jam.\t PERINGATAN: Bila tidak kunjung sembuh segera konsultasikan ke dokter\n");

                                printf("\n2.Bronkitis:\nBiasanya disertai demam ringan pilek dan nafas sesak biasanya penderita akan merasakan banyak lendir di kerongkongan. Penyakit ini tentunya harus segera diatasi oleh tenaga kesehatan yang profesiional sebelum berkembang menjadi bronkitis kronis\n ");

                                printf("\n3.Paru-Paru basah:Penderita akan merasakan rasa yang sangat tidak nyaman di sekitar dada. Gejala ini merupakan gejala yang sangat serius, gejala ini harus ditindak lanjuti sebelum menjadi kronis. Faktor utama yang menyebabkan gejala ini adalah kecenderungan penderita yang sering menghisap bahan-bahan kimia dan kurangnya perhatian penderita akan kepentingan lokasi tidur dan  lainnya sehingga paru-paru akan berisi cairan ataupun nanah yang dapat menghambat transfer oksigen melaui darah. Segera periksakan ke dokter\n");

                            }
                            break;
                        }
                    }
                        break;

                        case '2' : ///sakit perut
                        {
                            system("cls");
                            printf("Sakit perut yang disertai dengan:\n");
                            printf("\na.Demam\n");
                            printf("\nb.Mual\n");
                            printf("\nc.Masalah dalam buag air besar\n");
                            printf("Pilih keluhan(a,b,c) = ");
                            scanf("%s",&op);
                            switch (op)
                            {
                            case 'a' :
                            {
                                printf("                        Gejala Berpotensi:\n");
                                printf("\n1.Radang usus besar:\nKondisi dimana satu atau lebih dari bagian usus yang mengalami radang, didinding usus mengelupas, nanah pada usus maupun dubur beberapa akibat yang disebabkan oleh usus besar. Biasanya disebabkan oleh konsumsi makanan yang tak sehat, pedas yang berlebiihan, makanan asam dan makanan cepat saji. Selain obat herbal, gejala ini juga harus disegerakan diserahkan kepada tenaga kesehatan profesional\n");

                                printf("\n3.Gastritis/Maag:\nSuatu peradangan pada lambung yang disebabkan oleh beberapa kondisi kompleks. Kondisi ini disebabkan oleh menipisnya bagian dalam lambung sehingga asam pada lambung mengikis dan menyebabkan peradangan. Penipisan ini terjadi karena kecenderungan penderita dalam mengkonsumsi alkohol, minuman bersoda, bahan kimia dan makanan pedas atau asam yang berlebih serta makan secara tidak teratur. Ada baiknya penderita segera menanganinya dengan bantuan tenaga medis profesional setelah diatasi dengan obat maag yang dijual di apotek terdekat\n");

                                printf("\n4.Usus buntu:\nKondisi dimana salah satu usus tidak dapat menyalurkan makanan dengan sempurna dikarenakan ketidak sempurnaan dalam pencernaan secara organik, biasanya terjadi pada anak-anak karena kecenderungan dalam mengkonsumsi makanan kurang berserat seperti mie instan, jambu biji dan makanan lain yang tidak dikunyah secara baik. Solusi terbaik adalah dengan diatasi oleh tenaga profesional dengan cara dioperasi apabila gejala telah akut\n");
                            }
                            break;
                            case 'b' :
                            {
                                printf("                        Gejala Berpotensi:\n");
                                printf("\n1.Gastritis/Maag:\nSuatu peradangan pada lambung yang disebabkan oleh beberapa kondisi kompleks. Kondisi ini disebabkan oleh menipisnya bagian dalam lambung sehingga asam pada lambung mengikis dan menyebabkan peradangan. Penipisan ini terjadi karena kecenderungan penderita dalam mengkonsumsi alkohol, minuman bersoda, bahan kimia dan makanan pedas atau asam yang berlebih serta makan secara tidak teratur. Ada baiknya penderita segera menanganinya dengan bantuan tenaga medis profesional setelah diatasi dengan obat maag yang dijual di apotek terdekat\n");

                                printf("\n2.Kolera:\nDisebabkan oleh penyajian makanan yang buruk sehingga makanan atau minuman terkontaminasi bakteri vibrio cholerae yang mengeluarkan enteretoksin diseluruh tubuh sehingga penderita akan mengalami mual dan dehidrasi,jika dehidrasi tidak di tangani secara cepat maka dapt menybabkan kematian. Gejala ini tidak bisa di di obati hanya dengan air biasa untuk menghilangkan dehidrasi tetapi penderita diharuskan menggunakan infus yang berisi cairan gula dan garam khusus. Ditandai dengan diare encer dan feses berubah menjadi cairan putih. Harus diatasi oleh dokter yang profesional\n");

                            }
                            break;
                            case 'c' :
                            {
                                printf("                   Gejala Berpotensi:\n");
                                printf("\n1.Sembelit:\nKelainan di dalam sistem pencernaan dimana penderita mengalami pengerasan tinja yang berlebihan sehingga sulit untuk dikeluarkan. Penyebab utamanya dikarenakan kekurangan cairan tubuh,panas dalam, stress dan kelainan hormon. Diatasi dengan banyak menambahkan cairan ke dalam tubuh, merendam kaki dalam air dingin dan obat yang teredia di apotek terdekat. Pemeriksaan lebih lannjut hubungi dokter\n ");

                                printf("\n3.Diare:\nDikarenakan konsumsi makanan yang pedas atau asam secara berlebihan hal ini terjadi karena usus tidak mendapatkan cairan yang mencukupi dan juga diare dapat disebakan oleh infekksi virus tertentu. Pada umumnya diare bisa diatasi dengan perawatan secara rumahan dengan menngkonsumsi obat yang beredar dipasaran maupun dengan bantuan tradisonal seperti daun jambu biji. Pemeriksaan lebih lanjut hubungi dokter\n");

                            }
                            break;
                            default :
                                printf("Operator Salahp!");
                            }
                            break;
                            }
                    }
                    break;
                }
                break;
        case 2: ///pada mata
            {
                system("cls");
                printf("ditandai dengan:\n");
                printf("\n1.Mata merah\n");
                printf("\nsilahkan pilih(1): ");
                scanf("%s",&cb);
                switch (cb)
                {
                    case '1' :
                    {
                        system("cls");
                        printf("Mata merah disertai dengan:\n");
                        printf("\na.sakit kepala\n");
                        printf("\nb.berair\n");
                        printf("Pilih keluhan(a,b) = ");
                        scanf("%s",&op);
                        switch (op)
                        {
                            case 'a' :
                            {
                                printf("                  Gejala Berpotensi jika terjadi lebih dari 3 hari:\n");
                                printf("\n1.Glaukoma:\nKeadaan dimana terjadi peningkatan tekanan pada bola mata sehingga menekan saraf pada bola mata dapat menyebabkan penurunan penglihatan hingga kebutaan. Mata akan terasa keras dan apabila diraba maka penglihatan langsung menurun. Silahkan periksakan ke dokter untuk penanganan lebih lanjut\n");

                                printf("\n2.Infeksi mata:\nTerjadi karena peradangan pada bulu mata, peradangan pada selaput mata dan borok pada mata. Mata akan merah lebih dari dua hari dan harus segera diperiksakan ke dokter\n");
                            }
                            break;
                            case 'b' :
                            {
                                printf("                        Gejala Berpotensi:\n");
                                printf("\n1.Glaukoma:Keadaan dimana terjadi peningkatan tekanan pada bola mata sehingga menekan saraf pada bola mata dapat menyebabkan penurunan penglihatan hingga kebutaan. Mata akan terasa keras dan apabila diraba maka penglihatan langsung menurun. Silahkan periksakan ke dokter untuk penanganan lebih lanjut\n");
                                printf("\n2.Infeksi mata:\nTerjadi karena peradangan pada bulu mata, peradangan pada selaput mata dan borok pada mata. Mata akan merah lebih dari dua hari dan harus segera diperiksakan ke dokter\n");
                            }
                            break;
                        }
                    }
                    break;
                }
                break;

        case 3: ///pada telinga
            {
                system("cls");
                printf("Anda mengalami:\n");
                printf("\n1.gangguan pendengaran\n");
                printf("\nsilahkan pilih(1): ");
                scanf("%s",&cb);
                switch (cb)
                {
                    case '1' :
                    {
                        system("cls");
                        printf("disertai dengan:\n");
                        printf("\na.demam\n");
                        printf("\nb.mual\n");
                        printf("\nc.pendarahan\n");
                        printf("Pilih keluhan(a,b,c) = ");
                        scanf("%s",&op);
                        switch (op)
                        {
                            case 'a' :
                            {
                                    printf("                        Gejala Berpotensi:\n");
                                    printf("\nOtitas media:\nDisebabkan oleh virus dan bakteri yang terjadi akibat kurang sterilnya telinga penderita sehingga kotoran telinga menumpuk daan mengakibatkan penderita akan merasakan sakit pada telinga disertai dengan pendengaran yang berkurang serta demam, pada tingkat lanjut telinga akan mengeluarkan nanah. Untuk keterangan lebih lanjut periksakan pada dokter\n");
                            }
                            break;
                            case 'b' :
                            {
                                    printf("                        Gejala Berpotensi:\n");
                                    printf("\nLabrinitis:\nGangguan labirin pada telinga. Disebabkan oleh infeksi, gegar otak dan alergi. Ditandai dengan mual, muntah dan pendengaran berkurang. Harus ditangani secara intensif oleh dokter karena beresiko tuli\n");
                            }
                            break;
                            case 'c' :
                            {
                                    printf("                        Gejala Berpotensi:\n");
                                    printf("\nOthematoma:\nBiasa disebut telinga bunga kol. Suatu kondisi dimana terjadi gangguan pada tulang rawan yang disertai dengan pendarahan. Sangat beresiko apabila tidak di rawat secara intensif\n");
                            }
                            break;
                        }
                    }
                        break;
                    }
                    break;

        case 4:
            {
              system("cls");
              printf("--------------------------------------------------------------------------------\n");
              printf("PROGRAM KONSULTASI VIRTUAL V.01:\n");
              printf("--------------------------------------------------------------------------------\n");
              printf("OLEH  : RIO ANDIKA SAPUTRA\n");
              printf("NIM   : 09021281419048\n");
              printf("KELAS : TEKNIK INFORMATIKA REGULAR 1-B \n");
              printf("\n");
            }
            break;



                }
                break;



        }
    }
}
