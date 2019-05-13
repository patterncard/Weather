#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <curl/curl.h>

struct MemoryStruct
{
    char *memory;
    size_t size;
};

static size_t
WriteMemoryCallback(void *contents, size_t size, size_t nmemb, void *userp)
{
    size_t realsize = size * nmemb;
    struct MemoryStruct *mem = (struct MemoryStruct *)userp;

    char *ptr = realloc(mem->memory, mem->size + realsize + 1);
    if (ptr == NULL)
    {
        printf("not enough memory (realloc returned NULL)\n");
        return 0;
    }

    mem->memory = ptr;
    memcpy(&(mem->memory[mem->size]), contents, realsize);
    mem->size += realsize;
    mem->memory[mem->size] = 0;

    return realsize;
}

int main()
{
    CURL *curl = curl_easy_init();
    CURL *curl_handle = curl_easy_init();
    CURLcode res;
    struct MemoryStruct chunk;
    chunk.memory = malloc(1);
    chunk.size = 0;
    if (curl)
    {
        printf("Choose city number:\n[1] Bialystok\n[2] Gdansk\n[3] Gliwice\n[4] Katowice\n[5] Lodz\n[6] Opole\n[7] Warsaw\n[8] Zywiec\n[9] Exit\n");
        int cityChoosen;
        scanf("%d", &cityChoosen);
        switch (cityChoosen)
        {
        case 1:
            printf("Bialystok\n");
            curl_easy_setopt(curl_handle, CURLOPT_URL, "http://api.openweathermap.org/data/2.5/weather?q=Bialystok&appid=af84822059c4495720af00937a834639");
            curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteMemoryCallback);
            curl_easy_setopt(curl, CURLOPT_WRITEDATA, (void *)&chunk);
            res = curl_easy_perform(curl_handle);
            if (res != CURLE_OK)
            {
                fprintf(stderr, "curl_easy_perform() failed: %s\n",
                        curl_easy_strerror(res));
            }
            else
            {
                printf("%lu bytes retrieved\n", (unsigned long)chunk.size);
            }
            curl_easy_cleanup(curl);
            curl_easy_cleanup(curl_handle);
            break;
        case 2:
            printf("Gdansk\n");
            curl_easy_setopt(curl_handle, CURLOPT_URL, "http://api.openweathermap.org/data/2.5/weather?q=Gdansk&appid=af84822059c4495720af00937a834639");
            curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteMemoryCallback);
            curl_easy_setopt(curl, CURLOPT_WRITEDATA, (void *)&chunk);
            res = curl_easy_perform(curl_handle);
            if (res != CURLE_OK)
            {
                fprintf(stderr, "curl_easy_perform() failed: %s\n",
                        curl_easy_strerror(res));
            }
            else
            {
                printf("%lu bytes retrieved\n", (unsigned long)chunk.size);
            }
            curl_easy_cleanup(curl);
            curl_easy_cleanup(curl_handle);
            break;
        case 3:
            printf("Gliwice\n");
            curl_easy_setopt(curl_handle, CURLOPT_URL, "http://api.openweathermap.org/data/2.5/weather?q=Gliwice&appid=af84822059c4495720af00937a834639");
            curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteMemoryCallback);
            curl_easy_setopt(curl, CURLOPT_WRITEDATA, (void *)&chunk);
            res = curl_easy_perform(curl_handle);
            if (res != CURLE_OK)
            {
                fprintf(stderr, "curl_easy_perform() failed: %s\n",
                        curl_easy_strerror(res));
            }
            else
            {
                printf("%lu bytes retrieved\n", (unsigned long)chunk.size);
            }
            curl_easy_cleanup(curl);
            curl_easy_cleanup(curl_handle);
            break;
        case 4:
            printf("Katowice\n");
            curl_easy_setopt(curl_handle, CURLOPT_URL, "http://api.openweathermap.org/data/2.5/weather?q=Katowice&appid=af84822059c4495720af00937a834639");
            curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteMemoryCallback);
            curl_easy_setopt(curl, CURLOPT_WRITEDATA, (void *)&chunk);
            res = curl_easy_perform(curl_handle);
            if (res != CURLE_OK)
            {
                fprintf(stderr, "curl_easy_perform() failed: %s\n",
                        curl_easy_strerror(res));
            }
            else
            {
                printf("%lu bytes retrieved\n", (unsigned long)chunk.size);
            }
            curl_easy_cleanup(curl);
            curl_easy_cleanup(curl_handle);
            break;
        case 5:
            printf("Lodz\n");
            curl_easy_setopt(curl_handle, CURLOPT_URL, "http://api.openweathermap.org/data/2.5/weather?q=Lodz&appid=af84822059c4495720af00937a834639");
            curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteMemoryCallback);
            curl_easy_setopt(curl, CURLOPT_WRITEDATA, (void *)&chunk);
            res = curl_easy_perform(curl_handle);
            if (res != CURLE_OK)
            {
                fprintf(stderr, "curl_easy_perform() failed: %s\n",
                        curl_easy_strerror(res));
            }
            else
            {
                printf("%lu bytes retrieved\n", (unsigned long)chunk.size);
            }
            curl_easy_cleanup(curl);
            curl_easy_cleanup(curl_handle);
            break;
        case 6:
            printf("Opole\n");
            curl_easy_setopt(curl_handle, CURLOPT_URL, "http://api.openweathermap.org/data/2.5/weather?q=Opole&appid=af84822059c4495720af00937a834639");
            curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteMemoryCallback);
            curl_easy_setopt(curl, CURLOPT_WRITEDATA, (void *)&chunk);
            res = curl_easy_perform(curl_handle);
            if (res != CURLE_OK)
            {
                fprintf(stderr, "curl_easy_perform() failed: %s\n",
                        curl_easy_strerror(res));
            }
            else
            {
                printf("%lu bytes retrieved\n", (unsigned long)chunk.size);
            }
            curl_easy_cleanup(curl);
            curl_easy_cleanup(curl_handle);
            break;
        case 7:
            printf("Warsaw\n");
            curl_easy_setopt(curl_handle, CURLOPT_URL, "http://api.openweathermap.org/data/2.5/weather?q=Warsaw&appid=af84822059c4495720af00937a834639");
            curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteMemoryCallback);
            curl_easy_setopt(curl, CURLOPT_WRITEDATA, (void *)&chunk);
            res = curl_easy_perform(curl_handle);
            if (res != CURLE_OK)
            {
                fprintf(stderr, "curl_easy_perform() failed: %s\n",
                        curl_easy_strerror(res));
            }
            else
            {
                printf("%lu bytes retrieved\n", (unsigned long)chunk.size);
            }
            curl_easy_cleanup(curl);
            curl_easy_cleanup(curl_handle);
            break;
        case 8:
            printf("Zywiec\n");
            curl_easy_setopt(curl_handle, CURLOPT_URL, "http://api.openweathermap.org/data/2.5/weather?q=Zywiec&appid=af84822059c4495720af00937a834639");
            curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteMemoryCallback);
            curl_easy_setopt(curl, CURLOPT_WRITEDATA, (void *)&chunk);
            res = curl_easy_perform(curl_handle);
            if (res != CURLE_OK)
            {
                fprintf(stderr, "curl_easy_perform() failed: %s\n",
                        curl_easy_strerror(res));
            }
            else
            {
                printf("%lu bytes retrieved\n", (unsigned long)chunk.size);
            }
            curl_easy_cleanup(curl);
            curl_easy_cleanup(curl_handle);
            break;
        case 9:
            exit(1);
        default:
            printf("You have not choosen the city.\n");
            break;
        }
    }
}
