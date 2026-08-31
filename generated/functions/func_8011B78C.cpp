#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8011B78C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8011B78C;

loc_8011B78C:
{
    MemoryInline::FlatWriteRam32((r1 + -208), r1);
    r1 = (r1 + -208);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 212), r0);
    MemoryInline::FlatWriteRam32((r1 + 204), r31);
    r31 = r3;
    r3 = (r1 + 12);
    MemoryInline::FlatWriteRam32((r1 + 200), r30);
    MemoryInline::FlatWriteRam32((r1 + 196), r29);
    r29 = r5;
    MemoryInline::FlatWriteRam32((r1 + 192), r28);
    r28 = r4;
    r0 = MemoryInline::FlatRead32((r4 + 12));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    ctx->lr = 0x8011B7C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801ED938u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead16((r28 + 16));
    // inline leaf 0x801ED990 (2 guest instruction(s))
    r3 = (r3 & 65535);
    // end of inlined leaf 0x801ED990
    r0 = MemoryInline::FlatRead8((r28 + 19));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8011B7D4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8011B850;
    }
}

loc_8011B7D8:
{
    r3 = (r1 + 108);
    r4 = (r13 + -30000);
    r5 = 6;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 3;
    r0 = 6;
    MemoryInline::FlatWriteRam8((r1 + 114), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 115), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r31 + 8));
    // inline leaf 0x801ED998 (1 guest instruction(s))
    // end of inlined leaf 0x801ED998
    MemoryInline::FlatWriteRam32((r1 + 116), r3);
    r0 = MemoryInline::FlatRead32((r31 + 12));
    MemoryInline::FlatWriteRam8((r1 + 121), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead16((r29 + 2));
    // inline leaf 0x801ED990 (2 guest instruction(s))
    r3 = (r3 & 65535);
    // end of inlined leaf 0x801ED990
    r30 = MemoryInline::FlatRead32((r29 + 4));
    r0 = 2;
    r29 = MemoryInline::FlatRead32(r31);
    r3 = (r3 & 65535);
    MemoryInline::FlatWriteRam8((r1 + 25), static_cast<uint8_t>(r0));
    // inline leaf 0x801ED99C (2 guest instruction(s))
    r3 = (r3 & 65535);
    // end of inlined leaf 0x801ED99C
    MemoryInline::FlatWriteRam16((r1 + 26), static_cast<uint16_t>(r3));
    r3 = r29;
    r4 = (r1 + 108);
    r7 = (r1 + 24);
    MemoryInline::FlatWriteRam32((r1 + 28), r30);
    r5 = 21;
    r6 = 0;
    r8 = 8;
    ctx->lr = 0x8011B850u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800F13D4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8011B850:
{
    r0 = MemoryInline::FlatRead32((r31 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8011B858:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8011B9B8;
    }
}

loc_8011B85C:
{
    r0 = MemoryInline::FlatRead8((r28 + 19));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8011B864:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8011B89C;
    }
}

loc_8011B868:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8011B86C:
{
    r4 = 4;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8011B87C;
    }
}

loc_8011B874:
{
    r4 = 1;
    goto loc_8011B888;
}

loc_8011B87C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_8011B880:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8011B888;
    }
}

loc_8011B884:
{
    r4 = 2;
}

loc_8011B888:
{
    r3 = r31;
    r5 = -1;
    r6 = 0;
    ctx->lr = 0x8011B898u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8011A894u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8011B9B8;
}

loc_8011B89C:
{
    r0 = MemoryInline::FlatRead32((r28 + 12));
    MemoryInline::FlatWrite32((r31 + 48), r0);
    r3 = MemoryInline::FlatRead16((r28 + 16));
    // inline leaf 0x801ED990 (2 guest instruction(s))
    r3 = (r3 & 65535);
    // end of inlined leaf 0x801ED990
    r12 = MemoryInline::FlatRead32((r31 + 56));
    r5 = 0;
    r0 = 2;
    MemoryInline::FlatWrite16((r31 + 52), static_cast<uint16_t>(r3));
    r4 = MemoryInline::FlatRead32((r31 + 64));
    r3 = 2;
    MemoryInline::FlatWrite32((r31 + 36), r5);
    MemoryInline::FlatWrite32((r31 + 16), r0);
    ctr = r12;
    ctx->lr = 0x8011B8D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r1 + 32);
    r4 = (r13 + -30000);
    r5 = 6;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 3;
    r0 = 7;
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 44u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 30u, (r1 + 38), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_0, 31u, (r1 + 39), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r31 + 8));
    // inline leaf 0x801ED998 (1 guest instruction(s))
    // end of inlined leaf 0x801ED998
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 40), r3);
    r0 = MemoryInline::FlatRead32((r31 + 48));
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 44), r0);
    r3 = MemoryInline::FlatRead16((r31 + 52));
    // inline leaf 0x801ED99C (2 guest instruction(s))
    r3 = (r3 & 65535);
    // end of inlined leaf 0x801ED99C
    MemoryInline::WriteResolved16(guest_range_0, 40u, (r1 + 48), static_cast<uint16_t>(r3));
    r3 = (r1 + 8);
    r0 = MemoryInline::FlatRead8((r31 + 54));
    MemoryInline::WriteResolved8(guest_range_0, 42u, (r1 + 50), static_cast<uint8_t>(r0));
    r5 = MemoryInline::FlatRead32((r31 + 16));
    r4 = (2 - r5);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(2) >= static_cast<uint32_t>(r5) ? 1u : 0u) << 29);
    r0 = (r5 + -2);
    r0 = (r4 | r0);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    MemoryInline::WriteResolved8(guest_range_0, 43u, (r1 + 51), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r31 + 48));
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + 8), r0);
    ctx->lr = 0x8011B944u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801ED938u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r30 = MemoryInline::FlatRead32((r31 + 4));
    r3 = MemoryInline::FlatRead16((r31 + 52));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(-1));
}

loc_8011B950:
{
    r29 = MemoryInline::FlatRead32((r31 + 48));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8011B95C;
    }
}

loc_8011B958:
{
    goto loc_8011B960;
}

loc_8011B95C:
{
    r30 = MemoryInline::FlatRead32(r31);
}

loc_8011B960:
{
    r0 = 2;
    MemoryInline::FlatWriteRam8((r1 + 17), static_cast<uint8_t>(r0));
    // inline leaf 0x801ED99C (2 guest instruction(s))
    r3 = (r3 & 65535);
    // end of inlined leaf 0x801ED99C
    MemoryInline::FlatWriteRam16((r1 + 18), static_cast<uint16_t>(r3));
    r3 = r30;
    r4 = (r1 + 32);
    r7 = (r1 + 16);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r5 = 20;
    r6 = 0;
    r8 = 8;
    ctx->lr = 0x8011B990u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800F13D4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    ctx->lr = 0x8011B994u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800F24C8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8((r31 + 54));
    r4 = (r3 + 700);
    r3 = 7;
    MemoryInline::FlatWrite32((r31 + 44), r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8011B9A8:
{
    MemoryInline::FlatWrite32((r31 + 40), r3);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8011B9B8;
    }
}

loc_8011B9B0:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 55), static_cast<uint8_t>(r0));
}

loc_8011B9B8:
{
    r0 = MemoryInline::FlatRead32((r1 + 212));
    r31 = MemoryInline::FlatRead32((r1 + 204));
    r30 = MemoryInline::FlatRead32((r1 + 200));
    r29 = MemoryInline::FlatRead32((r1 + 196));
    r28 = MemoryInline::FlatRead32((r1 + 192));
    ctx->lr = r0;
    r1 = (r1 + 208);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8011B78C func_8011B78C preserves=true fpr_mask=0x00000000
