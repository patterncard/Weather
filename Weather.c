#include <stdio.h>
#include <stdlib.h>
#include <curl/curl.h>

int main()
{
    CURL *curl = curl_easy_init();
    CURLcode res;
    if (curl)
    {
        printf("Choose city number:\n[1] Bialystok\n[2] Gdansk\n[3] Gliwice\n[4] Katowice\n[5] Lodz\n[6] Opole\n[7] Warsaw\n[8] Zywiec\n[9] Exit\n");
        int cityChoosen;
        scanf("%d", &cityChoosen);
        switch (cityChoosen)
        {
        case 1:
            printf("Bialystok\n");
            curl_easy_setopt(curl, CURLOPT_URL, "http://api.openweathermap.org/data/2.5/weather?q=Bialystok&appid=af84822059c4495720af00937a834639");
            res = curl_easy_perform(curl);
            curl_easy_cleanup(curl);
            break;
        case 2:
            printf("Gdansk\n");
            curl_easy_setopt(curl, CURLOPT_URL, "http://api.openweathermap.org/data/2.5/weather?q=Gdansk&appid=af84822059c4495720af00937a834639");
            res = curl_easy_perform(curl);
            curl_easy_cleanup(curl);
            break;
        case 3:
            printf("Gliwice\n");
            curl_easy_setopt(curl, CURLOPT_URL, "http://api.openweathermap.org/data/2.5/weather?q=Gliwice&appid=af84822059c4495720af00937a834639");
            res = curl_easy_perform(curl);
            curl_easy_cleanup(curl);
            break;
        case 4:
            printf("Katowice\n");
            curl_easy_setopt(curl, CURLOPT_URL, "http://api.openweathermap.org/data/2.5/weather?q=Katowice&appid=af84822059c4495720af00937a834639");
            res = curl_easy_perform(curl);
            curl_easy_cleanup(curl);
            break;
        case 5:
            printf("Lodz\n");
            curl_easy_setopt(curl, CURLOPT_URL, "http://api.openweathermap.org/data/2.5/weather?q=Lodz&appid=af84822059c4495720af00937a834639");
            res = curl_easy_perform(curl);
            curl_easy_cleanup(curl);
            break;
        case 6:
            printf("Opole\n");
            curl_easy_setopt(curl, CURLOPT_URL, "http://api.openweathermap.org/data/2.5/weather?q=Opole&appid=af84822059c4495720af00937a834639");
            res = curl_easy_perform(curl);
            curl_easy_cleanup(curl);
            break;
        case 7:
            printf("Warsaw\n");
            curl_easy_setopt(curl, CURLOPT_URL, "http://api.openweathermap.org/data/2.5/weather?q=Warsaw&appid=af84822059c4495720af00937a834639");
            res = curl_easy_perform(curl);
            curl_easy_cleanup(curl);
            break;
        case 8:
            printf("Zywiec\n");
            curl_easy_setopt(curl, CURLOPT_URL, "http://api.openweathermap.org/data/2.5/weather?q=Zywiec&appid=af84822059c4495720af00937a834639");
            res = curl_easy_perform(curl);
            curl_easy_cleanup(curl);
            break;
        case 9:
            exit(1);
        default:
            printf("You have not choosen the city.\n");
            break;
        }
    }
}