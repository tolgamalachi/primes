FROM ubuntu:16.04

ADD /build/primes /opt/primes

CMD ["/opt/primes"] 
