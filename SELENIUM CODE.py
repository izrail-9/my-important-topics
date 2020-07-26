"""
        chromedriver = "F:\IDM\Compressed\chromedriver_win32/chromedriver"
        driver = webdriver.Chrome(chromedriver)
        //*[@id="post-4176"]/div/div/div/div/section[3]/div/div/div/div/div/div/div/div/div[3]/div[2]/div[1]/div[1]/div
pc-image-info-box-button-btn-text

"""

from selenium import webdriver
from selenium.webdriver.chrome.options import Options
import time
for i in range(500):
    chrome_options = webdriver.ChromeOptions()
    chrome_options.add_experimental_option("excludeSwitches", ['enable-automation'])

    chromedriver = "F:\IDM\Compressed\chromedriver_win32/chromedriver"
    driver = webdriver.Chrome(chromedriver,options=chrome_options)

   # driver.fullscreen_window()
   
    driver.get('https://fotofox.live/miss-bihar-2020/?contest=photo-detail&photo_id=31958')

    #driver.execute_script("window.scrollTo(0, 500)")
    #driver.execute_script("window.scrollTo(2,document.body.scrollHeight)")
    click_button=driver.find_element_by_class_name('pc-image-info-box-button-btn-text')
    
#     click_button.click()

    driver.execute_script("arguments[0].click()",click_button)
    time.sleep(4)
    driver.quit()
