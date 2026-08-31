#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" uint64_t func_8068E830_statefree();
extern "C" uint64_t func_8068E83C_statefree(uint32_t);

extern "C" void func_806B171C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806B171C;

loc_806B171C:
{
    MemoryInline::FlatWriteRam32((r1 + -272), r1);
    r1 = (r1 + -272);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 276), r0);
    MemoryInline::FlatWriteRam32((r1 + 268), r31);
    r31 = r3;
    // inline leaf 0x8068E830 (3 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    // end of inlined leaf 0x8068E830
    // inline leaf 0x8068E83C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 2920));
    // end of inlined leaf 0x8068E83C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(31));
}

loc_806B173C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806B1774;
    }
}

loc_806B1740:
{
    r3 = (r1 + 248);
    r4 = 255;
    r5 = 238;
    r6 = 157;
    r7 = 150;
    // inline leaf 0x806AE36C (5 guest instruction(s))
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r7));
    // end of inlined leaf 0x806AE36C
    r3 = (r31 + 404);
    r4 = (r1 + 248);
    // inline leaf 0x806AE380 (9 guest instruction(s))
    r7 = MemoryInline::FlatRead8(r4);
    r6 = MemoryInline::FlatRead8((r4 + 1));
    r5 = MemoryInline::FlatRead8((r4 + 2));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x806AE380
    r3 = (r1 + 248);
    r4 = -1;
    ctx->lr = 0x806B1770u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068E848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806B17E8;
}

loc_806B1774:
{
    // inline leaf 0x8068E830 (3 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    // end of inlined leaf 0x8068E830
    // inline leaf 0x8068E83C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 2920));
    // end of inlined leaf 0x8068E83C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(36));
}

loc_806B1780:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806B17B8;
    }
}

loc_806B1784:
{
    r3 = (r1 + 244);
    r4 = 241;
    r5 = 210;
    r6 = 148;
    r7 = 150;
    // inline leaf 0x806AE36C (5 guest instruction(s))
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r7));
    // end of inlined leaf 0x806AE36C
    r3 = (r31 + 404);
    r4 = (r1 + 244);
    // inline leaf 0x806AE380 (9 guest instruction(s))
    r7 = MemoryInline::FlatRead8(r4);
    r6 = MemoryInline::FlatRead8((r4 + 1));
    r5 = MemoryInline::FlatRead8((r4 + 2));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x806AE380
    r3 = (r1 + 244);
    r4 = -1;
    ctx->lr = 0x806B17B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068E848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806B17E8;
}

loc_806B17B8:
{
    r3 = (r1 + 240);
    r4 = 255;
    r5 = 255;
    r6 = 186;
    r7 = 150;
    // inline leaf 0x806AE36C (5 guest instruction(s))
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r7));
    // end of inlined leaf 0x806AE36C
    r3 = (r31 + 404);
    r4 = (r1 + 240);
    // inline leaf 0x806AE380 (9 guest instruction(s))
    r7 = MemoryInline::FlatRead8(r4);
    r6 = MemoryInline::FlatRead8((r4 + 1));
    r5 = MemoryInline::FlatRead8((r4 + 2));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x806AE380
    r3 = (r1 + 240);
    r4 = -1;
    ctx->lr = 0x806B17E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068E848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_806B17E8:
{
    // inline leaf 0x8068E830 (3 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    // end of inlined leaf 0x8068E830
    // inline leaf 0x8068E83C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 2920));
    // end of inlined leaf 0x8068E83C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(22));
}

loc_806B17F4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806B182C;
    }
}

loc_806B17F8:
{
    r3 = (r1 + 236);
    r4 = 243;
    r5 = 226;
    r6 = 142;
    r7 = 200;
    // inline leaf 0x806AE36C (5 guest instruction(s))
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r7));
    // end of inlined leaf 0x806AE36C
    r3 = (r31 + 408);
    r4 = (r1 + 236);
    // inline leaf 0x806AE380 (9 guest instruction(s))
    r7 = MemoryInline::FlatRead8(r4);
    r6 = MemoryInline::FlatRead8((r4 + 1));
    r5 = MemoryInline::FlatRead8((r4 + 2));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x806AE380
    r3 = (r1 + 236);
    r4 = -1;
    ctx->lr = 0x806B1828u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068E848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806B185C;
}

loc_806B182C:
{
    r3 = (r1 + 232);
    r4 = 231;
    r5 = 192;
    r6 = 111;
    r7 = 150;
    // inline leaf 0x806AE36C (5 guest instruction(s))
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r7));
    // end of inlined leaf 0x806AE36C
    r3 = (r31 + 408);
    r4 = (r1 + 232);
    // inline leaf 0x806AE380 (9 guest instruction(s))
    r7 = MemoryInline::FlatRead8(r4);
    r6 = MemoryInline::FlatRead8((r4 + 1));
    r5 = MemoryInline::FlatRead8((r4 + 2));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x806AE380
    r3 = (r1 + 232);
    r4 = -1;
    ctx->lr = 0x806B185Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068E848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_806B185C:
{
    r3 = (r1 + 228);
    r4 = 243;
    r5 = 223;
    r6 = 163;
    r7 = 150;
    // inline leaf 0x806AE36C (5 guest instruction(s))
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r7));
    // end of inlined leaf 0x806AE36C
    r3 = (r31 + 412);
    r4 = (r1 + 228);
    // inline leaf 0x806AE380 (9 guest instruction(s))
    r7 = MemoryInline::FlatRead8(r4);
    r6 = MemoryInline::FlatRead8((r4 + 1));
    r5 = MemoryInline::FlatRead8((r4 + 2));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x806AE380
    r3 = (r1 + 228);
    r4 = -1;
    ctx->lr = 0x806B188Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068E848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    // inline leaf 0x8068E830 (3 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    // end of inlined leaf 0x8068E830
    // inline leaf 0x8068E83C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 2920));
    // end of inlined leaf 0x8068E83C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(35));
}

loc_806B1898:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806B18D0;
    }
}

loc_806B189C:
{
    r3 = (r1 + 224);
    r4 = 255;
    r5 = 241;
    r6 = 138;
    r7 = 150;
    // inline leaf 0x806AE36C (5 guest instruction(s))
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r7));
    // end of inlined leaf 0x806AE36C
    r3 = (r31 + 416);
    r4 = (r1 + 224);
    // inline leaf 0x806AE380 (9 guest instruction(s))
    r7 = MemoryInline::FlatRead8(r4);
    r6 = MemoryInline::FlatRead8((r4 + 1));
    r5 = MemoryInline::FlatRead8((r4 + 2));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x806AE380
    r3 = (r1 + 224);
    r4 = -1;
    ctx->lr = 0x806B18CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068E848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806B1900;
}

loc_806B18D0:
{
    r3 = (r1 + 220);
    r4 = 204;
    r5 = 139;
    r6 = 84;
    r7 = 200;
    // inline leaf 0x806AE36C (5 guest instruction(s))
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r7));
    // end of inlined leaf 0x806AE36C
    r3 = (r31 + 416);
    r4 = (r1 + 220);
    // inline leaf 0x806AE380 (9 guest instruction(s))
    r7 = MemoryInline::FlatRead8(r4);
    r6 = MemoryInline::FlatRead8((r4 + 1));
    r5 = MemoryInline::FlatRead8((r4 + 2));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x806AE380
    r3 = (r1 + 220);
    r4 = -1;
    ctx->lr = 0x806B1900u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068E848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_806B1900:
{
    // inline leaf 0x8068E830 (3 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    // end of inlined leaf 0x8068E830
    // inline leaf 0x8068E83C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 2920));
    // end of inlined leaf 0x8068E83C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(3));
}

loc_806B190C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806B1944;
    }
}

loc_806B1910:
{
    r3 = (r1 + 216);
    r4 = 124;
    r5 = 80;
    r6 = 39;
    r7 = 255;
    // inline leaf 0x806AE36C (5 guest instruction(s))
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r7));
    // end of inlined leaf 0x806AE36C
    r3 = (r31 + 420);
    r4 = (r1 + 216);
    // inline leaf 0x806AE380 (9 guest instruction(s))
    r7 = MemoryInline::FlatRead8(r4);
    r6 = MemoryInline::FlatRead8((r4 + 1));
    r5 = MemoryInline::FlatRead8((r4 + 2));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x806AE380
    r3 = (r1 + 216);
    r4 = -1;
    ctx->lr = 0x806B1940u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068E848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806B1974;
}

loc_806B1944:
{
    r3 = (r1 + 212);
    r4 = 159;
    r5 = 125;
    r6 = 64;
    r7 = 200;
    // inline leaf 0x806AE36C (5 guest instruction(s))
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r7));
    // end of inlined leaf 0x806AE36C
    r3 = (r31 + 420);
    r4 = (r1 + 212);
    // inline leaf 0x806AE380 (9 guest instruction(s))
    r7 = MemoryInline::FlatRead8(r4);
    r6 = MemoryInline::FlatRead8((r4 + 1));
    r5 = MemoryInline::FlatRead8((r4 + 2));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x806AE380
    r3 = (r1 + 212);
    r4 = -1;
    ctx->lr = 0x806B1974u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068E848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_806B1974:
{
    r3 = (r1 + 208);
    r4 = 255;
    r5 = 255;
    r6 = 186;
    r7 = 150;
    // inline leaf 0x806AE36C (5 guest instruction(s))
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r7));
    // end of inlined leaf 0x806AE36C
    r3 = (r31 + 424);
    r4 = (r1 + 208);
    // inline leaf 0x806AE380 (9 guest instruction(s))
    r7 = MemoryInline::FlatRead8(r4);
    r6 = MemoryInline::FlatRead8((r4 + 1));
    r5 = MemoryInline::FlatRead8((r4 + 2));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x806AE380
    r3 = (r1 + 208);
    r4 = -1;
    ctx->lr = 0x806B19A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068E848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r1 + 204);
    r4 = 231;
    r5 = 231;
    r6 = 196;
    r7 = 100;
    // inline leaf 0x806AE36C (5 guest instruction(s))
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r7));
    // end of inlined leaf 0x806AE36C
    r3 = (r31 + 428);
    r4 = (r1 + 204);
    // inline leaf 0x806AE380 (9 guest instruction(s))
    r7 = MemoryInline::FlatRead8(r4);
    r6 = MemoryInline::FlatRead8((r4 + 1));
    r5 = MemoryInline::FlatRead8((r4 + 2));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x806AE380
    r3 = (r1 + 204);
    r4 = -1;
    ctx->lr = 0x806B19D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068E848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r1 + 200);
    r4 = 71;
    r5 = 107;
    r6 = 63;
    r7 = 255;
    // inline leaf 0x806AE36C (5 guest instruction(s))
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r7));
    // end of inlined leaf 0x806AE36C
    r3 = (r31 + 476);
    r4 = (r1 + 200);
    // inline leaf 0x806AE380 (9 guest instruction(s))
    r7 = MemoryInline::FlatRead8(r4);
    r6 = MemoryInline::FlatRead8((r4 + 1));
    r5 = MemoryInline::FlatRead8((r4 + 2));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x806AE380
    r3 = (r1 + 200);
    r4 = -1;
    ctx->lr = 0x806B1A04u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068E848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r1 + 196);
    r4 = 159;
    r5 = 112;
    r6 = 60;
    r7 = 255;
    // inline leaf 0x806AE36C (5 guest instruction(s))
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r7));
    // end of inlined leaf 0x806AE36C
    r3 = (r31 + 492);
    r4 = (r1 + 196);
    // inline leaf 0x806AE380 (9 guest instruction(s))
    r7 = MemoryInline::FlatRead8(r4);
    r6 = MemoryInline::FlatRead8((r4 + 1));
    r5 = MemoryInline::FlatRead8((r4 + 2));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x806AE380
    r3 = (r1 + 196);
    r4 = -1;
    ctx->lr = 0x806B1A34u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068E848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    // inline leaf 0x8068E830 (3 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    // end of inlined leaf 0x8068E830
    // inline leaf 0x8068E83C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 2920));
    // end of inlined leaf 0x8068E83C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806B1A40:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806B1A78;
    }
}

loc_806B1A44:
{
    r3 = (r1 + 192);
    r4 = 243;
    r5 = 228;
    r6 = 144;
    r7 = 255;
    // inline leaf 0x806AE36C (5 guest instruction(s))
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r7));
    // end of inlined leaf 0x806AE36C
    r3 = (r31 + 432);
    r4 = (r1 + 192);
    // inline leaf 0x806AE380 (9 guest instruction(s))
    r7 = MemoryInline::FlatRead8(r4);
    r6 = MemoryInline::FlatRead8((r4 + 1));
    r5 = MemoryInline::FlatRead8((r4 + 2));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x806AE380
    r3 = (r1 + 192);
    r4 = -1;
    ctx->lr = 0x806B1A74u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068E848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806B1CC8;
}

loc_806B1A78:
{
    // inline leaf 0x8068E830 (3 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    // end of inlined leaf 0x8068E830
    // inline leaf 0x8068E83C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 2920));
    // end of inlined leaf 0x8068E83C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(12));
}

loc_806B1A84:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806B1ABC;
    }
}

loc_806B1A88:
{
    r3 = (r1 + 188);
    r4 = 70;
    r5 = 65;
    r6 = 50;
    r7 = 255;
    // inline leaf 0x806AE36C (5 guest instruction(s))
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r7));
    // end of inlined leaf 0x806AE36C
    r3 = (r31 + 432);
    r4 = (r1 + 188);
    // inline leaf 0x806AE380 (9 guest instruction(s))
    r7 = MemoryInline::FlatRead8(r4);
    r6 = MemoryInline::FlatRead8((r4 + 1));
    r5 = MemoryInline::FlatRead8((r4 + 2));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x806AE380
    r3 = (r1 + 188);
    r4 = -1;
    ctx->lr = 0x806B1AB8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068E848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806B1CC8;
}

loc_806B1ABC:
{
    // inline leaf 0x8068E830 (3 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    // end of inlined leaf 0x8068E830
    // inline leaf 0x8068E83C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 2920));
    // end of inlined leaf 0x8068E83C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(26));
}

loc_806B1AC8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806B1B00;
    }
}

loc_806B1ACC:
{
    r3 = (r1 + 184);
    r4 = 241;
    r5 = 219;
    r6 = 159;
    r7 = 255;
    // inline leaf 0x806AE36C (5 guest instruction(s))
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r7));
    // end of inlined leaf 0x806AE36C
    r3 = (r31 + 432);
    r4 = (r1 + 184);
    // inline leaf 0x806AE380 (9 guest instruction(s))
    r7 = MemoryInline::FlatRead8(r4);
    r6 = MemoryInline::FlatRead8((r4 + 1));
    r5 = MemoryInline::FlatRead8((r4 + 2));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x806AE380
    r3 = (r1 + 184);
    r4 = -1;
    ctx->lr = 0x806B1AFCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068E848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806B1CC8;
}

loc_806B1B00:
{
    // inline leaf 0x8068E830 (3 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    // end of inlined leaf 0x8068E830
    // inline leaf 0x8068E83C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 2920));
    // end of inlined leaf 0x8068E83C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(30));
}

loc_806B1B0C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806B1B44;
    }
}

loc_806B1B10:
{
    r3 = (r1 + 180);
    r4 = 159;
    r5 = 97;
    r6 = 87;
    r7 = 255;
    // inline leaf 0x806AE36C (5 guest instruction(s))
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r7));
    // end of inlined leaf 0x806AE36C
    r3 = (r31 + 432);
    r4 = (r1 + 180);
    // inline leaf 0x806AE380 (9 guest instruction(s))
    r7 = MemoryInline::FlatRead8(r4);
    r6 = MemoryInline::FlatRead8((r4 + 1));
    r5 = MemoryInline::FlatRead8((r4 + 2));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x806AE380
    r3 = (r1 + 180);
    r4 = -1;
    ctx->lr = 0x806B1B40u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068E848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806B1CC8;
}

loc_806B1B44:
{
    // inline leaf 0x8068E830 (3 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    // end of inlined leaf 0x8068E830
    // inline leaf 0x8068E83C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 2920));
    // end of inlined leaf 0x8068E83C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(24));
}

loc_806B1B50:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806B1B88;
    }
}

loc_806B1B54:
{
    r3 = (r1 + 176);
    r4 = 216;
    r5 = 199;
    r6 = 141;
    r7 = 255;
    // inline leaf 0x806AE36C (5 guest instruction(s))
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r7));
    // end of inlined leaf 0x806AE36C
    r3 = (r31 + 432);
    r4 = (r1 + 176);
    // inline leaf 0x806AE380 (9 guest instruction(s))
    r7 = MemoryInline::FlatRead8(r4);
    r6 = MemoryInline::FlatRead8((r4 + 1));
    r5 = MemoryInline::FlatRead8((r4 + 2));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x806AE380
    r3 = (r1 + 176);
    r4 = -1;
    ctx->lr = 0x806B1B84u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068E848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806B1CC8;
}

loc_806B1B88:
{
    // inline leaf 0x8068E830 (3 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    // end of inlined leaf 0x8068E830
    // inline leaf 0x8068E83C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 2920));
    // end of inlined leaf 0x8068E83C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(39));
}

loc_806B1B94:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806B1BCC;
    }
}

loc_806B1B98:
{
    r3 = (r1 + 172);
    r4 = 216;
    r5 = 199;
    r6 = 141;
    r7 = 255;
    // inline leaf 0x806AE36C (5 guest instruction(s))
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r7));
    // end of inlined leaf 0x806AE36C
    r3 = (r31 + 432);
    r4 = (r1 + 172);
    // inline leaf 0x806AE380 (9 guest instruction(s))
    r7 = MemoryInline::FlatRead8(r4);
    r6 = MemoryInline::FlatRead8((r4 + 1));
    r5 = MemoryInline::FlatRead8((r4 + 2));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x806AE380
    r3 = (r1 + 172);
    r4 = -1;
    ctx->lr = 0x806B1BC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068E848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806B1CC8;
}

loc_806B1BCC:
{
    // inline leaf 0x8068E830 (3 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    // end of inlined leaf 0x8068E830
    // inline leaf 0x8068E83C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 2920));
    // end of inlined leaf 0x8068E83C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(40));
}

loc_806B1BD8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806B1C10;
    }
}

loc_806B1BDC:
{
    r3 = (r1 + 168);
    r4 = 255;
    r5 = 224;
    r6 = 176;
    r7 = 255;
    // inline leaf 0x806AE36C (5 guest instruction(s))
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r7));
    // end of inlined leaf 0x806AE36C
    r3 = (r31 + 432);
    r4 = (r1 + 168);
    // inline leaf 0x806AE380 (9 guest instruction(s))
    r7 = MemoryInline::FlatRead8(r4);
    r6 = MemoryInline::FlatRead8((r4 + 1));
    r5 = MemoryInline::FlatRead8((r4 + 2));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x806AE380
    r3 = (r1 + 168);
    r4 = -1;
    ctx->lr = 0x806B1C0Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068E848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806B1CC8;
}

loc_806B1C10:
{
    // inline leaf 0x8068E830 (3 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    // end of inlined leaf 0x8068E830
    // inline leaf 0x8068E83C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 2920));
    // end of inlined leaf 0x8068E83C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(14));
}

loc_806B1C1C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806B1C54;
    }
}

loc_806B1C20:
{
    r3 = (r1 + 164);
    r4 = 207;
    r5 = 183;
    r6 = 85;
    r7 = 255;
    // inline leaf 0x806AE36C (5 guest instruction(s))
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r7));
    // end of inlined leaf 0x806AE36C
    r3 = (r31 + 432);
    r4 = (r1 + 164);
    // inline leaf 0x806AE380 (9 guest instruction(s))
    r7 = MemoryInline::FlatRead8(r4);
    r6 = MemoryInline::FlatRead8((r4 + 1));
    r5 = MemoryInline::FlatRead8((r4 + 2));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x806AE380
    r3 = (r1 + 164);
    r4 = -1;
    ctx->lr = 0x806B1C50u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068E848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806B1CC8;
}

loc_806B1C54:
{
    // inline leaf 0x8068E830 (3 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    // end of inlined leaf 0x8068E830
    // inline leaf 0x8068E83C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 2920));
    // end of inlined leaf 0x8068E83C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_806B1C60:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806B1C98;
    }
}

loc_806B1C64:
{
    r3 = (r1 + 160);
    r4 = 69;
    r5 = 117;
    r6 = 85;
    r7 = 128;
    // inline leaf 0x806AE36C (5 guest instruction(s))
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r7));
    // end of inlined leaf 0x806AE36C
    r3 = (r31 + 432);
    r4 = (r1 + 160);
    // inline leaf 0x806AE380 (9 guest instruction(s))
    r7 = MemoryInline::FlatRead8(r4);
    r6 = MemoryInline::FlatRead8((r4 + 1));
    r5 = MemoryInline::FlatRead8((r4 + 2));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x806AE380
    r3 = (r1 + 160);
    r4 = -1;
    ctx->lr = 0x806B1C94u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068E848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806B1CC8;
}

loc_806B1C98:
{
    r3 = (r1 + 156);
    r4 = 243;
    r5 = 228;
    r6 = 120;
    r7 = 255;
    // inline leaf 0x806AE36C (5 guest instruction(s))
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r7));
    // end of inlined leaf 0x806AE36C
    r3 = (r31 + 432);
    r4 = (r1 + 156);
    // inline leaf 0x806AE380 (9 guest instruction(s))
    r7 = MemoryInline::FlatRead8(r4);
    r6 = MemoryInline::FlatRead8((r4 + 1));
    r5 = MemoryInline::FlatRead8((r4 + 2));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x806AE380
    r3 = (r1 + 156);
    r4 = -1;
    ctx->lr = 0x806B1CC8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068E848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_806B1CC8:
{
    // inline leaf 0x8068E830 (3 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    // end of inlined leaf 0x8068E830
    // inline leaf 0x8068E83C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 2920));
    // end of inlined leaf 0x8068E83C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(18));
}

loc_806B1CD4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806B1D0C;
    }
}

loc_806B1CD8:
{
    r3 = (r1 + 152);
    r4 = 105;
    r5 = 80;
    r6 = 52;
    r7 = 255;
    // inline leaf 0x806AE36C (5 guest instruction(s))
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r7));
    // end of inlined leaf 0x806AE36C
    r3 = (r31 + 436);
    r4 = (r1 + 152);
    // inline leaf 0x806AE380 (9 guest instruction(s))
    r7 = MemoryInline::FlatRead8(r4);
    r6 = MemoryInline::FlatRead8((r4 + 1));
    r5 = MemoryInline::FlatRead8((r4 + 2));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x806AE380
    r3 = (r1 + 152);
    r4 = -1;
    ctx->lr = 0x806B1D08u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068E848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806B1DC4;
}

loc_806B1D0C:
{
    // inline leaf 0x8068E830 (3 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    // end of inlined leaf 0x8068E830
    // inline leaf 0x8068E83C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 2920));
    // end of inlined leaf 0x8068E83C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(29));
}

loc_806B1D18:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806B1D50;
    }
}

loc_806B1D1C:
{
    r3 = (r1 + 148);
    r4 = 117;
    r5 = 85;
    r6 = 51;
    r7 = 255;
    // inline leaf 0x806AE36C (5 guest instruction(s))
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r7));
    // end of inlined leaf 0x806AE36C
    r3 = (r31 + 436);
    r4 = (r1 + 148);
    // inline leaf 0x806AE380 (9 guest instruction(s))
    r7 = MemoryInline::FlatRead8(r4);
    r6 = MemoryInline::FlatRead8((r4 + 1));
    r5 = MemoryInline::FlatRead8((r4 + 2));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x806AE380
    r3 = (r1 + 148);
    r4 = -1;
    ctx->lr = 0x806B1D4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068E848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806B1DC4;
}

loc_806B1D50:
{
    // inline leaf 0x8068E830 (3 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    // end of inlined leaf 0x8068E830
    // inline leaf 0x8068E83C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 2920));
    // end of inlined leaf 0x8068E83C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(19));
}

loc_806B1D5C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806B1D94;
    }
}

loc_806B1D60:
{
    r3 = (r1 + 144);
    r4 = 111;
    r5 = 87;
    r6 = 57;
    r7 = 255;
    // inline leaf 0x806AE36C (5 guest instruction(s))
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r7));
    // end of inlined leaf 0x806AE36C
    r3 = (r31 + 436);
    r4 = (r1 + 144);
    // inline leaf 0x806AE380 (9 guest instruction(s))
    r7 = MemoryInline::FlatRead8(r4);
    r6 = MemoryInline::FlatRead8((r4 + 1));
    r5 = MemoryInline::FlatRead8((r4 + 2));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x806AE380
    r3 = (r1 + 144);
    r4 = -1;
    ctx->lr = 0x806B1D90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068E848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806B1DC4;
}

loc_806B1D94:
{
    r3 = (r1 + 140);
    r4 = 183;
    r5 = 144;
    r6 = 84;
    r7 = 255;
    // inline leaf 0x806AE36C (5 guest instruction(s))
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r7));
    // end of inlined leaf 0x806AE36C
    r3 = (r31 + 436);
    r4 = (r1 + 140);
    // inline leaf 0x806AE380 (9 guest instruction(s))
    r7 = MemoryInline::FlatRead8(r4);
    r6 = MemoryInline::FlatRead8((r4 + 1));
    r5 = MemoryInline::FlatRead8((r4 + 2));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x806AE380
    r3 = (r1 + 140);
    r4 = -1;
    ctx->lr = 0x806B1DC4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068E848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_806B1DC4:
{
    // inline leaf 0x8068E830 (3 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    // end of inlined leaf 0x8068E830
    // inline leaf 0x8068E83C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 2920));
    // end of inlined leaf 0x8068E83C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(21));
}

loc_806B1DD0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806B1E08;
    }
}

loc_806B1DD4:
{
    r3 = (r1 + 136);
    r4 = 231;
    r5 = 184;
    r6 = 87;
    r7 = 255;
    // inline leaf 0x806AE36C (5 guest instruction(s))
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r7));
    // end of inlined leaf 0x806AE36C
    r3 = (r31 + 440);
    r4 = (r1 + 136);
    // inline leaf 0x806AE380 (9 guest instruction(s))
    r7 = MemoryInline::FlatRead8(r4);
    r6 = MemoryInline::FlatRead8((r4 + 1));
    r5 = MemoryInline::FlatRead8((r4 + 2));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x806AE380
    r3 = (r1 + 136);
    r4 = -1;
    ctx->lr = 0x806B1E04u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068E848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806B1E38;
}

loc_806B1E08:
{
    r3 = (r1 + 132);
    r4 = 243;
    r5 = 228;
    r6 = 133;
    r7 = 200;
    // inline leaf 0x806AE36C (5 guest instruction(s))
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r7));
    // end of inlined leaf 0x806AE36C
    r3 = (r31 + 440);
    r4 = (r1 + 132);
    // inline leaf 0x806AE380 (9 guest instruction(s))
    r7 = MemoryInline::FlatRead8(r4);
    r6 = MemoryInline::FlatRead8((r4 + 1));
    r5 = MemoryInline::FlatRead8((r4 + 2));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x806AE380
    r3 = (r1 + 132);
    r4 = -1;
    ctx->lr = 0x806B1E38u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068E848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_806B1E38:
{
    r3 = (r1 + 128);
    r4 = 183;
    r5 = 154;
    r6 = 135;
    r7 = 200;
    // inline leaf 0x806AE36C (5 guest instruction(s))
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r7));
    // end of inlined leaf 0x806AE36C
    r3 = (r31 + 444);
    r4 = (r1 + 128);
    // inline leaf 0x806AE380 (9 guest instruction(s))
    r7 = MemoryInline::FlatRead8(r4);
    r6 = MemoryInline::FlatRead8((r4 + 1));
    r5 = MemoryInline::FlatRead8((r4 + 2));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x806AE380
    r3 = (r1 + 128);
    r4 = -1;
    ctx->lr = 0x806B1E68u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068E848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    // inline leaf 0x8068E830 (3 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    // end of inlined leaf 0x8068E830
    // inline leaf 0x8068E83C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 2920));
    // end of inlined leaf 0x8068E83C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(18));
}

loc_806B1E74:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806B1EAC;
    }
}

loc_806B1E78:
{
    r3 = (r1 + 124);
    r4 = 82;
    r5 = 91;
    r6 = 67;
    r7 = 255;
    // inline leaf 0x806AE36C (5 guest instruction(s))
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r7));
    // end of inlined leaf 0x806AE36C
    r3 = (r31 + 484);
    r4 = (r1 + 124);
    // inline leaf 0x806AE380 (9 guest instruction(s))
    r7 = MemoryInline::FlatRead8(r4);
    r6 = MemoryInline::FlatRead8((r4 + 1));
    r5 = MemoryInline::FlatRead8((r4 + 2));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x806AE380
    r3 = (r1 + 124);
    r4 = -1;
    ctx->lr = 0x806B1EA8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068E848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806B1EDC;
}

loc_806B1EAC:
{
    r3 = (r1 + 120);
    r4 = 116;
    r5 = 77;
    r6 = 0;
    r7 = 255;
    // inline leaf 0x806AE36C (5 guest instruction(s))
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r7));
    // end of inlined leaf 0x806AE36C
    r3 = (r31 + 484);
    r4 = (r1 + 120);
    // inline leaf 0x806AE380 (9 guest instruction(s))
    r7 = MemoryInline::FlatRead8(r4);
    r6 = MemoryInline::FlatRead8((r4 + 1));
    r5 = MemoryInline::FlatRead8((r4 + 2));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x806AE380
    r3 = (r1 + 120);
    r4 = -1;
    ctx->lr = 0x806B1EDCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068E848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_806B1EDC:
{
    // inline leaf 0x8068E830 (3 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    // end of inlined leaf 0x8068E830
    // inline leaf 0x8068E83C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 2920));
    // end of inlined leaf 0x8068E83C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806B1EE8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806B1F20;
    }
}

loc_806B1EEC:
{
    r3 = (r1 + 116);
    r4 = 60;
    r5 = 160;
    r6 = 0;
    r7 = 255;
    // inline leaf 0x806AE36C (5 guest instruction(s))
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r7));
    // end of inlined leaf 0x806AE36C
    r3 = (r31 + 468);
    r4 = (r1 + 116);
    // inline leaf 0x806AE380 (9 guest instruction(s))
    r7 = MemoryInline::FlatRead8(r4);
    r6 = MemoryInline::FlatRead8((r4 + 1));
    r5 = MemoryInline::FlatRead8((r4 + 2));
    r0 = MemoryInline::FlatRead8((r4 + 3));
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x806AE380
    r3 = (r1 + 116);
    r4 = -1;
    ctx->lr = 0x806B1F1Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068E848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806B22C4;
}

loc_806B1F20:
{
    // inline leaf 0x8068E830 (3 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    // end of inlined leaf 0x8068E830
    // inline leaf 0x8068E83C (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 2920));
    // end of inlined leaf 0x8068E83C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_806B1F2C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806B1F64;
    }
}

loc_806B1F30:
{
    r3 = (r1 + 112);
    r4 = 100;
    r5 = 231;
    r6 = 0;
    r7 = 255;
    // inline leaf 0x806AE36C (5 guest instruction(s))
    MemoryInline::FlatWriteRam8(r3, static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r3 + 1), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r3 + 2), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r3 + 3), static_cast<uint8_t>(r7));
    // end of inlined leaf 0x806AE36C
    r3 = (r31 + 468);
    r4 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x806AE380u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r3 = (r1 + 112);
    r4 = -1;
    ctx->lr = 0x806B1F60u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068E848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806B22C4;
}

loc_806B1F64:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8068E830u) && KnownTranslatedCpuCall<0x8068E830u>::kAvailable && !KnownTranslatedCpuCall<0x8068E830u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8068E830u>()) {
        const auto state_free_result_8068E830_107D9 = func_8068E830_statefree();
        r3 = static_cast<uint32_t>(state_free_result_8068E830_107D9);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8068E830u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8068E83Cu) && KnownTranslatedCpuCall<0x8068E83Cu>::kAvailable && !KnownTranslatedCpuCall<0x8068E83Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8068E83Cu>()) {
        const auto state_free_result_8068E83C_10BA6 = func_8068E83C_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_8068E83C_10BA6);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8068E83Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_806B1F70:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806B1FA8;
    }
}

loc_806B1F74:
{
    r3 = (r1 + 108);
    r4 = 68;
    r5 = 202;
    r6 = 0;
    r7 = 255;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x806AE36Cu>(ctx);
    r3 = (r31 + 468);
    r4 = (r1 + 108);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x806AE380u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r3 = (r1 + 108);
    r4 = -1;
    ctx->lr = 0x806B1FA4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068E848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806B22C4;
}

loc_806B1FA8:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8068E830u) && KnownTranslatedCpuCall<0x8068E830u>::kAvailable && !KnownTranslatedCpuCall<0x8068E830u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8068E830u>()) {
        const auto state_free_result_8068E830_114D8 = func_8068E830_statefree();
        r3 = static_cast<uint32_t>(state_free_result_8068E830_114D8);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8068E830u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8068E83Cu) && KnownTranslatedCpuCall<0x8068E83Cu>::kAvailable && !KnownTranslatedCpuCall<0x8068E83Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8068E83Cu>()) {
        const auto state_free_result_8068E83C_118A5 = func_8068E83C_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_8068E83C_118A5);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8068E83Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(11));
}

loc_806B1FB4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806B1FEC;
    }
}

loc_806B1FB8:
{
    r3 = (r1 + 104);
    r4 = 140;
    r5 = 120;
    r6 = 0;
    r7 = 255;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x806AE36Cu>(ctx);
    r3 = (r31 + 468);
    r4 = (r1 + 104);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x806AE380u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r3 = (r1 + 104);
    r4 = -1;
    ctx->lr = 0x806B1FE8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068E848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806B22C4;
}

loc_806B1FEC:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8068E830u) && KnownTranslatedCpuCall<0x8068E830u>::kAvailable && !KnownTranslatedCpuCall<0x8068E830u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8068E830u>()) {
        const auto state_free_result_8068E830_121D9 = func_8068E830_statefree();
        r3 = static_cast<uint32_t>(state_free_result_8068E830_121D9);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8068E830u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8068E83Cu) && KnownTranslatedCpuCall<0x8068E83Cu>::kAvailable && !KnownTranslatedCpuCall<0x8068E83Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8068E83Cu>()) {
        const auto state_free_result_8068E83C_125A6 = func_8068E83C_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_8068E83C_125A6);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8068E83Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(15));
}

loc_806B1FF8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806B2030;
    }
}

loc_806B1FFC:
{
    r3 = (r1 + 100);
    r4 = 40;
    r5 = 185;
    r6 = 0;
    r7 = 255;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x806AE36Cu>(ctx);
    r3 = (r31 + 468);
    r4 = (r1 + 100);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x806AE380u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r3 = (r1 + 100);
    r4 = -1;
    ctx->lr = 0x806B202Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068E848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806B22C4;
}

loc_806B2030:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8068E830u) && KnownTranslatedCpuCall<0x8068E830u>::kAvailable && !KnownTranslatedCpuCall<0x8068E830u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8068E830u>()) {
        const auto state_free_result_8068E830_12ED9 = func_8068E830_statefree();
        r3 = static_cast<uint32_t>(state_free_result_8068E830_12ED9);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8068E830u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8068E83Cu) && KnownTranslatedCpuCall<0x8068E83Cu>::kAvailable && !KnownTranslatedCpuCall<0x8068E83Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8068E83Cu>()) {
        const auto state_free_result_8068E83C_132A6 = func_8068E83C_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_8068E83C_132A6);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8068E83Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(29));
}

loc_806B203C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806B2074;
    }
}

loc_806B2040:
{
    r3 = (r1 + 96);
    r4 = 73;
    r5 = 158;
    r6 = 0;
    r7 = 255;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x806AE36Cu>(ctx);
    r3 = (r31 + 468);
    r4 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x806AE380u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r3 = (r1 + 96);
    r4 = -1;
    ctx->lr = 0x806B2070u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068E848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806B22C4;
}

loc_806B2074:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8068E830u) && KnownTranslatedCpuCall<0x8068E830u>::kAvailable && !KnownTranslatedCpuCall<0x8068E830u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8068E830u>()) {
        const auto state_free_result_8068E830_13BD6 = func_8068E830_statefree();
        r3 = static_cast<uint32_t>(state_free_result_8068E830_13BD6);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8068E830u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8068E83Cu) && KnownTranslatedCpuCall<0x8068E83Cu>::kAvailable && !KnownTranslatedCpuCall<0x8068E83Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8068E83Cu>()) {
        const auto state_free_result_8068E83C_13FA3 = func_8068E83C_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_8068E83C_13FA3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8068E83Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(22));
}

loc_806B2080:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806B20B8;
    }
}

loc_806B2084:
{
    r3 = (r1 + 92);
    r4 = 50;
    r5 = 185;
    r6 = 0;
    r7 = 255;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x806AE36Cu>(ctx);
    r3 = (r31 + 468);
    r4 = (r1 + 92);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x806AE380u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r3 = (r1 + 92);
    r4 = -1;
    ctx->lr = 0x806B20B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068E848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806B22C4;
}

loc_806B20B8:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8068E830u) && KnownTranslatedCpuCall<0x8068E830u>::kAvailable && !KnownTranslatedCpuCall<0x8068E830u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8068E830u>()) {
        const auto state_free_result_8068E830_148D3 = func_8068E830_statefree();
        r3 = static_cast<uint32_t>(state_free_result_8068E830_148D3);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8068E830u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8068E83Cu) && KnownTranslatedCpuCall<0x8068E83Cu>::kAvailable && !KnownTranslatedCpuCall<0x8068E83Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8068E83Cu>()) {
        const auto state_free_result_8068E83C_14CA0 = func_8068E83C_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_8068E83C_14CA0);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8068E83Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(31));
}

loc_806B20C4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806B20FC;
    }
}

loc_806B20C8:
{
    r3 = (r1 + 88);
    r4 = 63;
    r5 = 183;
    r6 = 0;
    r7 = 255;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x806AE36Cu>(ctx);
    r3 = (r31 + 468);
    r4 = (r1 + 88);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x806AE380u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r3 = (r1 + 88);
    r4 = -1;
    ctx->lr = 0x806B20F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068E848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806B22C4;
}

loc_806B20FC:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8068E830u) && KnownTranslatedCpuCall<0x8068E830u>::kAvailable && !KnownTranslatedCpuCall<0x8068E830u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8068E830u>()) {
        const auto state_free_result_8068E830_155D0 = func_8068E830_statefree();
        r3 = static_cast<uint32_t>(state_free_result_8068E830_155D0);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8068E830u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8068E83Cu) && KnownTranslatedCpuCall<0x8068E83Cu>::kAvailable && !KnownTranslatedCpuCall<0x8068E83Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8068E83Cu>()) {
        const auto state_free_result_8068E83C_1599D = func_8068E83C_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_8068E83C_1599D);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8068E83Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(28));
}

loc_806B2108:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806B2140;
    }
}

loc_806B210C:
{
    r3 = (r1 + 84);
    r4 = 90;
    r5 = 175;
    r6 = 0;
    r7 = 255;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x806AE36Cu>(ctx);
    r3 = (r31 + 468);
    r4 = (r1 + 84);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x806AE380u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r3 = (r1 + 84);
    r4 = -1;
    ctx->lr = 0x806B213Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068E848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806B22C4;
}

loc_806B2140:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8068E830u) && KnownTranslatedCpuCall<0x8068E830u>::kAvailable && !KnownTranslatedCpuCall<0x8068E830u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8068E830u>()) {
        const auto state_free_result_8068E830_162CD = func_8068E830_statefree();
        r3 = static_cast<uint32_t>(state_free_result_8068E830_162CD);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8068E830u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8068E83Cu) && KnownTranslatedCpuCall<0x8068E83Cu>::kAvailable && !KnownTranslatedCpuCall<0x8068E83Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8068E83Cu>()) {
        const auto state_free_result_8068E83C_1669A = func_8068E83C_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_8068E83C_1669A);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8068E83Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(26));
}

loc_806B214C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806B2184;
    }
}

loc_806B2150:
{
    r3 = (r1 + 80);
    r4 = 85;
    r5 = 167;
    r6 = 0;
    r7 = 255;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x806AE36Cu>(ctx);
    r3 = (r31 + 468);
    r4 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x806AE380u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r3 = (r1 + 80);
    r4 = -1;
    ctx->lr = 0x806B2180u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068E848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806B22C4;
}

loc_806B2184:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8068E830u) && KnownTranslatedCpuCall<0x8068E830u>::kAvailable && !KnownTranslatedCpuCall<0x8068E830u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8068E830u>()) {
        const auto state_free_result_8068E830_16FCA = func_8068E830_statefree();
        r3 = static_cast<uint32_t>(state_free_result_8068E830_16FCA);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8068E830u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8068E83Cu) && KnownTranslatedCpuCall<0x8068E83Cu>::kAvailable && !KnownTranslatedCpuCall<0x8068E83Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8068E83Cu>()) {
        const auto state_free_result_8068E83C_17397 = func_8068E83C_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_8068E83C_17397);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8068E83Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(17));
}

loc_806B2190:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806B21C8;
    }
}

loc_806B2194:
{
    r3 = (r1 + 76);
    r4 = 85;
    r5 = 170;
    r6 = 0;
    r7 = 255;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x806AE36Cu>(ctx);
    r3 = (r31 + 468);
    r4 = (r1 + 76);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x806AE380u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r3 = (r1 + 76);
    r4 = -1;
    ctx->lr = 0x806B21C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068E848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806B22C4;
}

loc_806B21C8:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8068E830u) && KnownTranslatedCpuCall<0x8068E830u>::kAvailable && !KnownTranslatedCpuCall<0x8068E830u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8068E830u>()) {
        const auto state_free_result_8068E830_17CC7 = func_8068E830_statefree();
        r3 = static_cast<uint32_t>(state_free_result_8068E830_17CC7);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8068E830u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8068E83Cu) && KnownTranslatedCpuCall<0x8068E83Cu>::kAvailable && !KnownTranslatedCpuCall<0x8068E83Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8068E83Cu>()) {
        const auto state_free_result_8068E83C_18094 = func_8068E83C_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_8068E83C_18094);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8068E83Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(16));
}

loc_806B21D4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806B220C;
    }
}

loc_806B21D8:
{
    r3 = (r1 + 72);
    r4 = 158;
    r5 = 231;
    r6 = 48;
    r7 = 255;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x806AE36Cu>(ctx);
    r3 = (r31 + 468);
    r4 = (r1 + 72);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x806AE380u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r3 = (r1 + 72);
    r4 = -1;
    ctx->lr = 0x806B2208u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068E848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806B22C4;
}

loc_806B220C:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8068E830u) && KnownTranslatedCpuCall<0x8068E830u>::kAvailable && !KnownTranslatedCpuCall<0x8068E830u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8068E830u>()) {
        const auto state_free_result_8068E830_189C6 = func_8068E830_statefree();
        r3 = static_cast<uint32_t>(state_free_result_8068E830_189C6);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8068E830u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8068E83Cu) && KnownTranslatedCpuCall<0x8068E83Cu>::kAvailable && !KnownTranslatedCpuCall<0x8068E83Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8068E83Cu>()) {
        const auto state_free_result_8068E83C_18D93 = func_8068E83C_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_8068E83C_18D93);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8068E83Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(23));
}

loc_806B2218:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806B2250;
    }
}

loc_806B221C:
{
    r3 = (r1 + 68);
    r4 = 207;
    r5 = 207;
    r6 = 63;
    r7 = 255;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x806AE36Cu>(ctx);
    r3 = (r31 + 468);
    r4 = (r1 + 68);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x806AE380u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r3 = (r1 + 68);
    r4 = -1;
    ctx->lr = 0x806B224Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068E848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806B22C4;
}

loc_806B2250:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8068E830u) && KnownTranslatedCpuCall<0x8068E830u>::kAvailable && !KnownTranslatedCpuCall<0x8068E830u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8068E830u>()) {
        const auto state_free_result_8068E830_196C5 = func_8068E830_statefree();
        r3 = static_cast<uint32_t>(state_free_result_8068E830_196C5);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8068E830u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8068E83Cu) && KnownTranslatedCpuCall<0x8068E83Cu>::kAvailable && !KnownTranslatedCpuCall<0x8068E83Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8068E83Cu>()) {
        const auto state_free_result_8068E83C_19A92 = func_8068E83C_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_8068E83C_19A92);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8068E83Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(12));
}

loc_806B225C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806B2294;
    }
}

loc_806B2260:
{
    r3 = (r1 + 64);
    r4 = 107;
    r5 = 77;
    r6 = 47;
    r7 = 255;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x806AE36Cu>(ctx);
    r3 = (r31 + 468);
    r4 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x806AE380u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r3 = (r1 + 64);
    r4 = -1;
    ctx->lr = 0x806B2290u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068E848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806B22C4;
}

loc_806B2294:
{
    r3 = (r1 + 60);
    r4 = 110;
    r5 = 195;
    r6 = 50;
    r7 = 255;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x806AE36Cu>(ctx);
    r3 = (r31 + 468);
    r4 = (r1 + 60);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x806AE380u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r3 = (r1 + 60);
    r4 = -1;
    ctx->lr = 0x806B22C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068E848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_806B22C4:
{
    r3 = (r1 + 56);
    r4 = 243;
    r5 = 228;
    r6 = 120;
    r7 = 255;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x806AE36Cu>(ctx);
    r3 = (r31 + 448);
    r4 = (r1 + 56);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x806AE380u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r3 = (r1 + 56);
    r4 = -1;
    ctx->lr = 0x806B22F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068E848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r1 + 52);
    r4 = 183;
    r5 = 144;
    r6 = 84;
    r7 = 255;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x806AE36Cu>(ctx);
    r3 = (r31 + 452);
    r4 = (r1 + 52);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x806AE380u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r3 = (r1 + 52);
    r4 = -1;
    ctx->lr = 0x806B2324u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068E848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r1 + 48);
    r4 = 255;
    r5 = 208;
    r6 = 109;
    r7 = 255;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x806AE36Cu>(ctx);
    r3 = (r31 + 456);
    r4 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x806AE380u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r3 = (r1 + 48);
    r4 = -1;
    ctx->lr = 0x806B2354u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068E848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8068E830u) && KnownTranslatedCpuCall<0x8068E830u>::kAvailable && !KnownTranslatedCpuCall<0x8068E830u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8068E830u>()) {
        const auto state_free_result_8068E830_1B580 = func_8068E830_statefree();
        r3 = static_cast<uint32_t>(state_free_result_8068E830_1B580);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8068E830u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8068E83Cu) && KnownTranslatedCpuCall<0x8068E83Cu>::kAvailable && !KnownTranslatedCpuCall<0x8068E83Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8068E83Cu>()) {
        const auto state_free_result_8068E83C_1B94D = func_8068E83C_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_8068E83C_1B94D);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8068E83Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(29));
}

loc_806B2360:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806B2398;
    }
}

loc_806B2364:
{
    r3 = (r1 + 44);
    r4 = 99;
    r5 = 75;
    r6 = 45;
    r7 = 255;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x806AE36Cu>(ctx);
    r3 = (r31 + 488);
    r4 = (r1 + 44);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x806AE380u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r3 = (r1 + 44);
    r4 = -1;
    ctx->lr = 0x806B2394u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068E848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806B2450;
}

loc_806B2398:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8068E830u) && KnownTranslatedCpuCall<0x8068E830u>::kAvailable && !KnownTranslatedCpuCall<0x8068E830u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8068E830u>()) {
        const auto state_free_result_8068E830_1C27D = func_8068E830_statefree();
        r3 = static_cast<uint32_t>(state_free_result_8068E830_1C27D);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8068E830u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8068E83Cu) && KnownTranslatedCpuCall<0x8068E83Cu>::kAvailable && !KnownTranslatedCpuCall<0x8068E83Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8068E83Cu>()) {
        const auto state_free_result_8068E83C_1C64A = func_8068E83C_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_8068E83C_1C64A);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8068E83Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(23));
}

loc_806B23A4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806B23DC;
    }
}

loc_806B23A8:
{
    r3 = (r1 + 40);
    r4 = 112;
    r5 = 69;
    r6 = 0;
    r7 = 255;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x806AE36Cu>(ctx);
    r3 = (r31 + 488);
    r4 = (r1 + 40);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x806AE380u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r3 = (r1 + 40);
    r4 = -1;
    ctx->lr = 0x806B23D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068E848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806B2450;
}

loc_806B23DC:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8068E830u) && KnownTranslatedCpuCall<0x8068E830u>::kAvailable && !KnownTranslatedCpuCall<0x8068E830u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8068E830u>()) {
        const auto state_free_result_8068E830_1CF7A = func_8068E830_statefree();
        r3 = static_cast<uint32_t>(state_free_result_8068E830_1CF7A);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8068E830u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8068E83Cu) && KnownTranslatedCpuCall<0x8068E83Cu>::kAvailable && !KnownTranslatedCpuCall<0x8068E83Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8068E83Cu>()) {
        const auto state_free_result_8068E83C_1D347 = func_8068E83C_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_8068E83C_1D347);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8068E83Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(12));
}

loc_806B23E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806B2420;
    }
}

loc_806B23EC:
{
    r3 = (r1 + 36);
    r4 = 110;
    r5 = 39;
    r6 = 0;
    r7 = 255;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x806AE36Cu>(ctx);
    r3 = (r31 + 488);
    r4 = (r1 + 36);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x806AE380u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r3 = (r1 + 36);
    r4 = -1;
    ctx->lr = 0x806B241Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068E848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806B2450;
}

loc_806B2420:
{
    r3 = (r1 + 32);
    r4 = 99;
    r5 = 75;
    r6 = 45;
    r7 = 255;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x806AE36Cu>(ctx);
    r3 = (r31 + 488);
    r4 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x806AE380u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r3 = (r1 + 32);
    r4 = -1;
    ctx->lr = 0x806B2450u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068E848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_806B2450:
{
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8068E830u) && KnownTranslatedCpuCall<0x8068E830u>::kAvailable && !KnownTranslatedCpuCall<0x8068E830u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8068E830u>()) {
        const auto state_free_result_8068E830_1E0F5 = func_8068E830_statefree();
        r3 = static_cast<uint32_t>(state_free_result_8068E830_1E0F5);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8068E830u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8068E83Cu) && KnownTranslatedCpuCall<0x8068E83Cu>::kAvailable && !KnownTranslatedCpuCall<0x8068E83Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8068E83Cu>()) {
        const auto state_free_result_8068E83C_1E4C2 = func_8068E83C_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_8068E83C_1E4C2);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8068E83Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(5));
}

loc_806B245C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806B2494;
    }
}

loc_806B2460:
{
    r3 = (r1 + 28);
    r4 = 60;
    r5 = 195;
    r6 = 0;
    r7 = 255;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x806AE36Cu>(ctx);
    r3 = (r31 + 472);
    r4 = (r1 + 28);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x806AE380u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r3 = (r1 + 28);
    r4 = -1;
    ctx->lr = 0x806B2490u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068E848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806B24C4;
}

loc_806B2494:
{
    r3 = (r1 + 24);
    r4 = 39;
    r5 = 135;
    r6 = 0;
    r7 = 255;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x806AE36Cu>(ctx);
    r3 = (r31 + 472);
    r4 = (r1 + 24);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x806AE380u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r3 = (r1 + 24);
    r4 = -1;
    ctx->lr = 0x806B24C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068E848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_806B24C4:
{
    r3 = (r1 + 20);
    r4 = 187;
    r5 = 134;
    r6 = 48;
    r7 = 255;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x806AE36Cu>(ctx);
    r3 = (r31 + 460);
    r4 = (r1 + 20);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x806AE380u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r3 = (r1 + 20);
    r4 = -1;
    ctx->lr = 0x806B24F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068E848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8068E830u) && KnownTranslatedCpuCall<0x8068E830u>::kAvailable && !KnownTranslatedCpuCall<0x8068E830u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8068E830u>()) {
        const auto state_free_result_8068E830_1F6D8 = func_8068E830_statefree();
        r3 = static_cast<uint32_t>(state_free_result_8068E830_1F6D8);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8068E830u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x8068E83Cu) && KnownTranslatedCpuCall<0x8068E83Cu>::kAvailable && !KnownTranslatedCpuCall<0x8068E83Cu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x8068E83Cu>()) {
        const auto state_free_result_8068E83C_1FAA5 = func_8068E83C_statefree(r3);
        r3 = static_cast<uint32_t>(state_free_result_8068E83C_1FAA5);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[7] = r7;
        ctx->gpr[31] = r31;
        ctx->cr = cr;
        InvokeDirectCpu<0x8068E83Cu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r7 = ctx->gpr[7];
        r31 = ctx->gpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(19));
}

loc_806B2500:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806B2538;
    }
}

loc_806B2504:
{
    r3 = (r1 + 16);
    r4 = 231;
    r5 = 178;
    r6 = 95;
    r7 = 100;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x806AE36Cu>(ctx);
    r3 = (r31 + 464);
    r4 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x806AE380u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r3 = (r1 + 16);
    r4 = -1;
    ctx->lr = 0x806B2534u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068E848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806B2568;
}

loc_806B2538:
{
    r3 = (r1 + 12);
    r4 = 231;
    r5 = 192;
    r6 = 111;
    r7 = 150;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x806AE36Cu>(ctx);
    r3 = (r31 + 464);
    r4 = (r1 + 12);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x806AE380u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r3 = (r1 + 12);
    r4 = -1;
    ctx->lr = 0x806B2568u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068E848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_806B2568:
{
    r3 = (r1 + 8);
    r4 = 80;
    r5 = 240;
    r6 = 0;
    r7 = 255;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x806AE36Cu>(ctx);
    r3 = (r31 + 480);
    r4 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x806AE380u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r3 = (r1 + 8);
    r4 = -1;
    ctx->lr = 0x806B2598u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8068E848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 276));
    r31 = MemoryInline::FlatRead32((r1 + 268));
    ctx->lr = r0;
    r1 = (r1 + 272);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFF0E gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806B171C func_806B171C preserves=true fpr_mask=0x00000000
