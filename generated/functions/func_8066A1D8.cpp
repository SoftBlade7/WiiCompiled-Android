#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8066A1D8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r5_stbu_ea_0 = 0;
    uint32_t r5_stbu_ea_1 = 0;
    uint32_t r5_stbu_ea_2 = 0;
    uint32_t r5_stbu_ea_3 = 0;
    uint32_t r5_stbu_ea_4 = 0;
    uint32_t r5_stbu_ea_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8066A1D8;

loc_8066A1D8:
{
    r3 = (r1 + 392);
    r4 = (r27 + 19729);
    r5 = 76;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x809C0000u;
    r4 = (r1 + 20);
    r3 = MemoryInline::FlatRead32((r3 + -10424));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x8054A9B8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066A1FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066A208;
    }
}

loc_8066A200:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    goto loc_8066A20C;
}

loc_8066A208:
{
    r0 = 0;
}

loc_8066A20C:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_0 & 255);
    MemoryInline::FlatWriteRam8((r1 + 471), static_cast<uint8_t>(r0));
    r0 = 0;
    r29 = (r27 + 16909);
    MemoryInline::FlatWrite32((r27 + 16909), r0);
    r28 = 0;
    r31 = 1;
    r26 = 38;
}

loc_8066A22C:
{
    r3 = r28;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80552D90u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r0 = (r3 & 65535);
}

loc_8066A23C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(31))) {
        goto loc_8066A264;
    }
}

loc_8066A240:
{
    r4 = (r30 + 65536);
    r0 = (r3 & 255);
    r3 = MemoryInline::FlatRead32((r4 + -28656));
    r0 = PPC_Slw(static_cast<uint32_t>(r31), static_cast<uint32_t>(r0));
    r3 = (r3 & r0);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    goto loc_8066A268;
}

loc_8066A264:
{
    r0 = 0;
}

loc_8066A268:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8066A26C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066A334;
    }
}

loc_8066A270:
{
    r3 = r30;
    r5 = r28;
    r4 = 0;
    ctx->lr = 0x8066A280u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80548E30u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead32(r29);
    r4 = (r1 + 391);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r5 = (r29 + r0);
    MemoryInline::FlatWrite32((r5 + 4), r28);
    r5 = MemoryInline::FlatRead16((r3 + 80));
    r0 = MemoryInline::FlatRead32(r29);
    r5 = (r5 * 60);
    r6 = MemoryInline::FlatRead8((r3 + 82));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r7 = MemoryInline::FlatRead16((r3 + 84));
    r6 = (r6 + r5);
    r5 = (r29 + r0);
    r0 = (r6 * 1000);
    r0 = (r7 + r0);
    MemoryInline::FlatWrite32((r5 + 132), r0);
    r0 = MemoryInline::FlatRead32((r3 + 96));
    MemoryInline::FlatWriteRam8((r1 + 468), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r3 + 88));
    MemoryInline::FlatWriteRam8((r1 + 469), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r3 + 92));
    MemoryInline::FlatWriteRam8((r1 + 470), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32(r29);
    r0 = (r0 * 80);
    r6 = (r29 + r0);
    r5 = (r6 + 259);
    ctr = r26;
}

loc_8066A2EC:
{
    r3 = MemoryInline::FlatRead8((r4 + 1));
    r4 = (r4 + 2);
    r0 = MemoryInline::FlatRead8(r4);
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r3));
    r5_stbu_ea_3 = (r5 + 2);
    MemoryInline::FlatWrite8(r5_stbu_ea_3, static_cast<uint8_t>(r0));
    r5 = r5_stbu_ea_3;
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8066A2EC;
    }
}

loc_8066A300:
{
    r0 = MemoryInline::FlatRead8((r1 + 468));
    MemoryInline::FlatWrite8((r6 + 336), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 469));
    MemoryInline::FlatWrite8((r6 + 337), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 470));
    MemoryInline::FlatWrite8((r6 + 338), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 471));
    MemoryInline::FlatWrite8((r6 + 339), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32(r29);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32(r29, r0);
}

loc_8066A330:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(16))) {
        goto loc_8066A340;
    }
}

loc_8066A334:
{
    r28 = (r28 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(32));
}

loc_8066A33C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8066A22C;
    }
}

loc_8066A340:
{
    r0 = MemoryInline::FlatRead32(r29);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8066A348:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8066A398;
    }
}

loc_8066A34C:
{
    r28 = 0x809C0000u;
    r4 = r29;
    r3 = MemoryInline::FlatRead32((r28 + 8512));
    r5 = 0;
    ctx->lr = 0x8066A360u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x806775E4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8066A364:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8066A374;
    }
}

loc_8066A368:
{
    r0 = 5;
    MemoryInline::FlatWrite32((r27 + 16896), r0);
    goto loc_8066AD88;
}

loc_8066A374:
{
    r3 = r27;
    ctx->lr = 0x8066A37Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8067552Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r28 + 8512));
    ctx->lr = 0x8066A384u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8067721Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWrite8((r27 + 40), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r27 + 30072), r0);
    MemoryInline::FlatWrite32((r27 + 16), r0);
    goto loc_8066AD88;
}

loc_8066A398:
{
    r0 = 6;
    MemoryInline::FlatWrite32((r27 + 16896), r0);
}

loc_8066AD88:
{
    r26 = MemoryInline::FlatRead32((r1 + 600));
    r27 = MemoryInline::FlatRead32((r1 + 604));
    r28 = MemoryInline::FlatRead32((r1 + 608));
    r29 = MemoryInline::FlatRead32((r1 + 612));
    r30 = MemoryInline::FlatRead32((r1 + 616));
    r31 = MemoryInline::FlatRead32((r1 + 620));
    r0 = MemoryInline::FlatRead32((r1 + 628));
    ctx->lr = r0;
    r1 = (r1 + 624);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8066A1D8 func_8066A1D8 preserves=true fpr_mask=0x00000000
