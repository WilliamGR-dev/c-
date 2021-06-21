#include "mainwindow.h"
#include "opencv2/opencv.hpp"
using namespace cv;

#include <QApplication>

int main(int argc, char *argv[])
{
//    char pseudo;
//    int choiceGameplay;
//    int replay = true;
//    std::cout << "Bienvenue sur le Shifumi" << std::endl;
//    std::cout << "Veuillez entrer votre pseudo" << std::endl;
//    std::cin >> pseudo;
//    while(replay){
//        int roundWin = 0;
//        int roundLose = 0;
//        std::cout << "Veuillez selectionner votre gameplay 1:computer, 2:multijoueur" << std::endl;
//        std::cin >> choiceGameplay;
//        if(choiceGameplay == 1){
//            int numberRound;
//            std::cout << "Lancement du gameplay solo" << std::endl;
//            std::cout << "Combien de manche voulez vous effectuer" << std::endl;
//            std::cin >> numberRound;
//            for (int i = 0; i <= numberRound; i++) {
//                std::cout << "Preparer vous pour le round" << std::endl;
//                if(i%2){
//                    std::cout << "Vous avez gagner" << std::endl;
//                    roundWin++;
//                }
//                else{
//                    std::cout << "Vous avez gagner" << std::endl;
//                    roundLose++;
//                }
//            }
//        }
//        else if(choiceGameplay == 2){
//            std::cout << "Lancement du gameplay multijoueur" << std::endl;
//            for (int i = 0; i <= 3; i++) {
//                std::cout << "Preparer vous pour le round" << std::endl;
//                if(i%2){
//                    std::cout << "Vous avez gagner" << std::endl;
//                    roundWin++;
//                }
//                else{
//                    std::cout << "Vous avez gagner" << std::endl;
//                    roundLose++;
//                }
//            }
//        }
//        int choiceReplay;
//        std::cout << "Enregistrement en base de donnees" << std::endl;
//        std::cout << "Voulez vous rejouer 1:oui 2:non" << std::endl;
//        std::cin >> choiceReplay;
//        if(choiceReplay == 2){
//            replay = false;
//        }

//    }
//    std::cout << "Merci d avoir jouer avec nous" << std::endl;
//    std::cout << "Fin du programe" << std::endl;
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
