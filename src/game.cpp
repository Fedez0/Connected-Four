#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;
using namespace std;

#define FRAMERATE 60

const Color backGround(113,117,114);
const Vector2i dimAreaGioco(7,6);

const VideoMode dimFrame(720,480); 
class Board{
    private:
    int **areaGioco;
    public:
    Board(){
       areaGioco = (int**)calloc(dimAreaGioco.y,sizeof(int*));
       for(int i=0;i<dimAreaGioco.y;i++){
            areaGioco[i] = (int*)calloc(dimAreaGioco.x,sizeof(int));
       } 
    }
    void print(){
        cout << endl;
        for(int i=0;i<dimAreaGioco.y;i++){
            for(int j=0;j<dimAreaGioco.x;j++){
                std::cout << areaGioco[i][j]<<" ";
                
            }
            cout <<endl;
        }
    }
};
void init(RenderWindow &window);
int main(){
    RenderWindow window(dimFrame,"Connected Four");
    Board board; 
    board.print();
    init(window);
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear(backGround);




        window.display();
    }

    return 0;
}
void init(RenderWindow &window){
    window.setFramerateLimit(FRAMERATE);
}