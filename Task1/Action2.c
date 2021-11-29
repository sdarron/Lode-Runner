Action2()
{
		
	/* Itinearary */

	web_url("welcome.pl", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=itinerary", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		LAST);
	
	return 0;
}
