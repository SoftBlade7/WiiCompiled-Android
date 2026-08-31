#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805E7220(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805E7220;

loc_805E7220:
{
    MemoryInline::FlatWriteRam32((r1 + -272), r1);
    r1 = (r1 + -272);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 276), r0);
    MemoryInline::FlatWriteRam32((r1 + 268), r31);
    MemoryInline::FlatWriteRam32((r1 + 264), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 260), r29);
    MemoryInline::FlatWriteRam32((r1 + 256), r28);
    r4 = MemoryInline::FlatRead32((r3 + 84));
    r4 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 84), r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(8));
}

loc_805E7250:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805E7278;
    }
}

loc_805E7254:
{
    r0 = 9;
    MemoryInline::FlatWrite32((r3 + 84), r0);
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r28 = MemoryInline::FlatRead32((r3 + 152));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801AAD5Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    MemoryInline::FlatWrite32((r28 + 1212), r4);
    MemoryInline::FlatWrite32((r28 + 1208), r3);
    goto loc_805E7420;
}

loc_805E7278:
{
    r0 = (r4 + -5);
    r28 = 65536;
    r29 = (r0 & 255);
    r31 = 0x809C0000u;
    r0 = (r28 + -29504);
    r3 = MemoryInline::FlatRead32((r31 + -10424));
    r0 = (r29 * r0);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r3 + -1380646912);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(20548));
}

loc_805E72A8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805E7420;
    }
}

loc_805E72AC:
{
    r3 = 0x809C0000u;
    r5 = r29;
    r3 = MemoryInline::FlatRead32((r3 + 8516));
    r4 = (r30 + 500);
    ctx->lr = 0x805E72C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8066B4BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805E72C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805E7420;
    }
}

loc_805E72C8:
{
    r3 = (r28 + -27664);
    r0 = 0;
    r4 = (r29 * r3);
    r5 = MemoryInline::FlatRead32((r31 + -10424));
    r3 = 0x808B0000u;
    MemoryInline::FlatWriteRam8((r1 + 30), static_cast<uint8_t>(r0));
    r3 = (r3 + 11588);
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    r4 = (r5 + r4);
    MemoryInline::FlatWriteRam16((r1 + 24), static_cast<uint16_t>(r0));
    r31 = (r4 + 56);
    r6 = (r31 + 65536);
    MemoryInline::FlatWriteRam8((r1 + 26), static_cast<uint8_t>(r0));
    r5 = MemoryInline::FlatRead8((r6 + -28070));
    MemoryInline::FlatWriteRam16((r1 + 28), static_cast<uint16_t>(r0));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_805E7308:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805E732C;
    }
}

loc_805E730C:
{
    r4 = MemoryInline::FlatRead16((r6 + -28076));
    r3 = MemoryInline::FlatRead8((r6 + -28074));
    r0 = MemoryInline::FlatRead16((r6 + -28072));
    MemoryInline::FlatWriteRam16((r1 + 24), static_cast<uint16_t>(r4));
    r28 = MemoryInline::FlatRead32((r6 + -28068));
    MemoryInline::FlatWriteRam8((r1 + 26), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam16((r1 + 28), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 30), static_cast<uint8_t>(r5));
}

loc_805E732C:
{
    r3 = (r1 + 32);
    r4 = (r30 + 500);
    ctx->lr = 0x805E7338u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8051C398u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r1 + 206));
    r6 = 0x808B0000u;
    r5 = MemoryInline::FlatRead16((r1 + 200));
    r6 = (r6 + 11588);
    r4 = MemoryInline::FlatRead8((r1 + 202));
}

loc_805E7350:
{
    r3 = MemoryInline::FlatRead16((r1 + 204));
    MemoryInline::FlatWriteRam32((r1 + 8), r6);
    r30 = MemoryInline::FlatRead32((r1 + 216));
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r0));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805E737C;
    }
}

loc_805E7370:
{
    r0 = MemoryInline::FlatRead8((r1 + 30));
}

loc_805E7378:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805E7384;
    }
}

loc_805E737C:
{
    r6 = 0;
    goto loc_805E73B0;
}

loc_805E7384:
{
    r0 = MemoryInline::FlatRead16((r1 + 28));
    r6 = 0;
}

loc_805E7390:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r3))) {
        goto loc_805E73B0;
    }
}

loc_805E7394:
{
    r0 = MemoryInline::FlatRead8((r1 + 26));
}

loc_805E739C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_805E73B0;
    }
}

loc_805E73A0:
{
    r0 = MemoryInline::FlatRead16((r1 + 24));
}

loc_805E73A8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r5))) {
        goto loc_805E73B0;
    }
}

loc_805E73AC:
{
    r6 = 1;
}

loc_805E73B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_805E73B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805E73C0;
    }
}

loc_805E73B8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(r30));
}

loc_805E73BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805E7408;
    }
}

loc_805E73C0:
{
    r3 = 0x809C0000u;
    r4 = r29;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r7 = (r1 + 32);
    r5 = 4;
    r6 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 144));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8062182Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r31 + 65536);
    r0 = MemoryInline::FlatRead16((r1 + 12));
    MemoryInline::FlatWrite16((r3 + -28076), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 14));
    MemoryInline::FlatWrite8((r3 + -28074), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r1 + 16));
    MemoryInline::FlatWrite16((r3 + -28072), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 18));
    MemoryInline::FlatWrite8((r3 + -28070), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r3 + -28068), r30);
}

loc_805E7408:
{
    r4 = 0x80520000u;
    r3 = (r1 + 136);
    r4 = (r4 + -15564);
    r5 = 12;
    r6 = 5;
    ctx->lr = 0x805E7420u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800210ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_805E7420:
{
    r0 = MemoryInline::FlatRead32((r1 + 276));
    r31 = MemoryInline::FlatRead32((r1 + 268));
    r30 = MemoryInline::FlatRead32((r1 + 264));
    r29 = MemoryInline::FlatRead32((r1 + 260));
    r28 = MemoryInline::FlatRead32((r1 + 256));
    ctx->lr = r0;
    r1 = (r1 + 272);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805E7220 func_805E7220 preserves=true fpr_mask=0x00000000
