Action()
{

	web_url("webtours", 
		"URL=http://localhost:1080/webtours/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://www.bing.com/favicon.ico", "Referer=", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "TLS1.2");

	web_url("fwlink", 
		"URL=https://go.microsoft.com/fwlink/?LinkId=251136", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_url("fwlink_2", 
		"URL=https://go.microsoft.com/fwlink/?LinkId=838604", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://az725175.vo.msecnd.net/scripts/jsll-4.js", "Referer=https://www.microsoft.com/ru-ru/edge?form=MA13DL&OCID=MA13DL", ENDITEM, 
		"Url=https://img-prod-cms-rt-microsoft-com.akamaized.net/cms/api/am/imageFileData/RE4ncJa", "Referer=https://www.microsoft.com/ru-ru/edge?form=MA13DL&OCID=MA13DL", ENDITEM, 
		"Url=https://www.microsoft.com/mwf/_h/v3.54/mwf.app/fonts/mwfmdl2-v3.54.woff", "Referer=https://www.microsoft.com/ru-ru/edge?form=MA13DL&OCID=MA13DL", ENDITEM, 
		"Url=https://www.microsoft.com/mwf/_h/v3.07/mwf.app/fonts/mwfmdl2-v3.07.woff", "Referer=https://www.microsoft.com/ru-ru/edge?form=MA13DL&OCID=MA13DL", ENDITEM, 
		"Url=https://assets.adobedtm.com/5ef092d1efb5/4d1d9f749fd3/32e77280c420/RCd01d50cad19649bf857a22be5995480e-source.min.js", "Referer=https://www.microsoft.com/ru-ru/edge?form=MA13DL&OCID=MA13DL", ENDITEM, 
		"Url=https://img-prod-cms-rt-microsoft-com.akamaized.net/cms/api/am/imageFileData/RWNdVl", "Referer=https://www.microsoft.com/ru-ru/edge?form=MA13DL&OCID=MA13DL", ENDITEM, 
		"Url=https://assets.adobedtm.com/5ef092d1efb5/4d1d9f749fd3/32e77280c420/RC94f4733b29664683b45fa34316948026-source.min.js", "Referer=https://www.microsoft.com/ru-ru/edge?form=MA13DL&OCID=MA13DL", ENDITEM, 
		"Url=https://assets.adobedtm.com/5ef092d1efb5/4d1d9f749fd3/32e77280c420/RCa18a420763494661bc8291e5f5f7e76e-source.min.js", "Referer=https://www.microsoft.com/ru-ru/edge?form=MA13DL&OCID=MA13DL", ENDITEM, 
		"Url=https://assets.adobedtm.com/5ef092d1efb5/4d1d9f749fd3/32e77280c420/RC4bddd5cb34d240afad8d268373999f34-source.min.js", "Referer=https://www.microsoft.com/ru-ru/edge?form=MA13DL&OCID=MA13DL", ENDITEM, 
		"Url=https://assets.adobedtm.com/5ef092d1efb5/4d1d9f749fd3/32e77280c420/RC0ee8c30f496b428a91d7f3289a2b8a2f-source.min.js", "Referer=https://www.microsoft.com/ru-ru/edge?form=MA13DL&OCID=MA13DL", ENDITEM, 
		"Url=https://assets.adobedtm.com/5ef092d1efb5/4d1d9f749fd3/32e77280c420/RC8cd6be4f72cf4da1aa891e7da23d144f-source.min.js", "Referer=https://www.microsoft.com/ru-ru/edge?form=MA13DL&OCID=MA13DL", ENDITEM, 
		"Url=https://assets.adobedtm.com/5ef092d1efb5/4d1d9f749fd3/32e77280c420/RCefb91313fdae420ebbea45d8f044894b-source.min.js", "Referer=https://www.microsoft.com/ru-ru/edge?form=MA13DL&OCID=MA13DL", ENDITEM, 
		"Url=https://assets.adobedtm.com/5ef092d1efb5/4d1d9f749fd3/32e77280c420/RC9fc5c8b8bfb94ba5833ba8065b1de353-source.min.js", "Referer=https://www.microsoft.com/ru-ru/edge?form=MA13DL&OCID=MA13DL", ENDITEM, 
		"Url=https://assets.adobedtm.com/5ef092d1efb5/4d1d9f749fd3/32e77280c420/RCacc6c4ed30494f9fad065afe638a7ca7-source.min.js", "Referer=https://www.microsoft.com/ru-ru/edge?form=MA13DL&OCID=MA13DL", ENDITEM, 
		"Url=https://assets.adobedtm.com/5ef092d1efb5/4d1d9f749fd3/32e77280c420/RCacffc06b369045cfbb828109db7c0633-source.min.js", "Referer=https://www.microsoft.com/ru-ru/edge?form=MA13DL&OCID=MA13DL", ENDITEM, 
		LAST);

	/* login */

	lr_think_time(620);

	web_submit_data("login.pl", 
		"Action=http://localhost:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value=132583.113487242ziVQHtDpQtAQViptzDt", ENDITEM, 
		"Name=username", "Value=jojo", ENDITEM, 
		"Name=password", "Value=bear", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=login.x", "Value=67", ENDITEM, 
		"Name=login.y", "Value=10", ENDITEM, 
		LAST);

	lr_think_time(9);

	web_submit_data("login.pl_2", 
		"Action=http://localhost:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value=132583.113487242ziVQHtDpQtAQViptzDt", ENDITEM, 
		"Name=username", "Value=jojo", ENDITEM, 
		"Name=password", "Value=bear", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=login.x", "Value=54", ENDITEM, 
		"Name=login.y", "Value=12", ENDITEM, 
		LAST);

	lr_think_time(9);

	web_submit_data("login.pl_3", 
		"Action=http://localhost:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"TargetFrame=body", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?username=jojo&password=bear", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value=132583.113487242ziVQHtDpQtAQViptzDt", ENDITEM, 
		"Name=username", "Value=jojo", ENDITEM, 
		"Name=password", "Value=bear", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=login.x", "Value=0", ENDITEM, 
		"Name=login.y", "Value=0", ENDITEM, 
		LAST);

	lr_think_time(8);

	web_submit_data("login.pl_4", 
		"Action=http://localhost:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"TargetFrame=body", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?username=jojo&password=bear", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=userSession", "Value=132583.113487242ziVQHtDpQtAQViptzDt", ENDITEM, 
		"Name=username", "Value=jojo", ENDITEM, 
		"Name=password", "Value=bean", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=login.x", "Value=63", ENDITEM, 
		"Name=login.y", "Value=6", ENDITEM, 
		LAST);

	lr_think_time(6);

	web_url("Search Flights Button", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=search", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=../WebTours/classes/FormDateUpdate.class", "Referer=", ENDITEM, 
		LAST);

	lr_think_time(31);

	web_custom_request("ocsp.digicert.com", 
		"URL=http://ocsp.digicert.com/", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/ocsp-response", 
		"Referer=", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		"EncType=application/ocsp-request", 
		"BodyBinary=0Q0O0M0K0I0\t\\x06\\x05+\\x0E\\x03\\x02\\x1A\\x05\\x00\\x04\\x14t\\x02F\\xF2Z\\\\B\\x12 \\xB5\\xBD]v\t\\xA6\\xBA\\\\\\xA3G\\xDF\\x04\\x14$\\xF2.N\\x0F\\xBD\\xCA\\xF7>)U\\xCAr\\x8Di\\x87VD\\xE9z\\x02\\x10\\x0B\\x8F\\x15\\xB5\\x9E\\xFF\\xEB\\xDBm\\xC5\\xA7f[\\xF4\\x1ES", 
		LAST);

	/* continiu1 */

	lr_think_time(27);

	web_submit_data("reservations.pl", 
		"Action=http://localhost:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl?page=welcome", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=depart", "Value=Denver", ENDITEM, 
		"Name=departDate", "Value=11/13/2021", ENDITEM, 
		"Name=arrive", "Value=Denver", ENDITEM, 
		"Name=returnDate", "Value=11/14/2021", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=.cgifields", "Value=roundtrip", ENDITEM, 
		"Name=.cgifields", "Value=seatType", ENDITEM, 
		"Name=.cgifields", "Value=seatPref", ENDITEM, 
		"Name=findFlights.x", "Value=23", ENDITEM, 
		"Name=findFlights.y", "Value=11", ENDITEM, 
		LAST);

	/* continue2 */

	lr_think_time(15);

	web_submit_data("reservations.pl_2", 
		"Action=http://localhost:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=outboundFlight", "Value=000;0;11/13/2021", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=reserveFlights.x", "Value=72", ENDITEM, 
		"Name=reserveFlights.y", "Value=7", ENDITEM, 
		LAST);

	/* continue3 */

	lr_think_time(11);

	web_submit_data("reservations.pl_3", 
		"Action=http://localhost:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=firstName", "Value=Jojo", ENDITEM, 
		"Name=lastName", "Value=Bean", ENDITEM, 
		"Name=address1", "Value=", ENDITEM, 
		"Name=address2", "Value=", ENDITEM, 
		"Name=pass1", "Value=Jojo Bean", ENDITEM, 
		"Name=creditCard", "Value=", ENDITEM, 
		"Name=expDate", "Value=", ENDITEM, 
		"Name=oldCCOption", "Value=", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=outboundFlight", "Value=000;0;11/13/2021", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=returnFlight", "Value=", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=.cgifields", "Value=saveCC", ENDITEM, 
		"Name=buyFlights.x", "Value=39", ENDITEM, 
		"Name=buyFlights.y", "Value=13", ENDITEM, 
		LAST);

	/* Itinearary */

	lr_think_time(34);

	web_url("welcome.pl", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=itinerary", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		LAST);

	/* singn off */

	lr_think_time(22);

	web_url("SignOff Button", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", 
		"TargetFrame=body", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=itinerary", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}