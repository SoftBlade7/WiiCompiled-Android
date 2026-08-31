#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8011BD50(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

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
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8011BD50;

loc_8011BD50:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r5;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r4;
    r0 = MemoryInline::FlatRead8((r4 + 7));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8011BD7C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8011BE30;
    }
}

loc_8011BD80:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8011BD90;
    }
}

loc_8011BD84:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8011BD88:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8011BD9C;
    }
}

loc_8011BD8C:
{
    goto loc_8011BF38;
}

loc_8011BD90:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(14));
}

loc_8011BD94:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8011BE80;
    }
}

loc_8011BD98:
{
    goto loc_8011BF38;
}

loc_8011BD9C:
{
    r0 = MemoryInline::FlatRead8((r4 + 12));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_8011BDA4:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8011BF38;
    }
}

loc_8011BDA8:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1020);
    r5 = 1;
    r4 = (r3 + r0);
    MemoryInline::FlatWrite32((r4 + 20), r5);
    r0 = MemoryInline::FlatRead32((r3 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8011BDC0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8011BF38;
    }
}

loc_8011BDC4:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8011BDCC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8011BF38;
    }
}

loc_8011BDD0:
{
    r0 = MemoryInline::FlatRead32((r3 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8011BDD8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8011BF38;
    }
}

loc_8011BDDC:
{
    r0 = MemoryInline::FlatRead32((r3 + 32));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8011BDE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8011BF38;
    }
}

loc_8011BDE8:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_8011BDF0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8011BE00;
    }
}

loc_8011BDF4:
{
    r0 = MemoryInline::FlatRead32((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8011BDFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8011BF38;
    }
}

loc_8011BE00:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 16), r0);
    ctx->lr = 0x8011BE0Cu;
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
    r3 = (r3 + 65536);
    r12 = MemoryInline::FlatRead32((r31 + 56));
    r0 = (r3 + -5536);
    r3 = MemoryInline::FlatRead32((r31 + 16));
    MemoryInline::FlatWrite32((r31 + 44), r0);
    r4 = MemoryInline::FlatRead32((r31 + 64));
    ctr = r12;
    ctx->lr = 0x8011BE2Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8011BF38;
}

loc_8011BE30:
{
    r0 = 3;
    MemoryInline::FlatWrite8((r4 + 7), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead16((r5 + 2));
    // inline leaf 0x801ED990 (2 guest instruction(s))
    r3 = (r3 & 65535);
    // end of inlined leaf 0x801ED990
    r30 = MemoryInline::FlatRead32((r30 + 4));
    r0 = 2;
    r31 = MemoryInline::FlatRead32(r31);
    r3 = (r3 & 65535);
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r0));
    // inline leaf 0x801ED99C (2 guest instruction(s))
    r3 = (r3 & 65535);
    // end of inlined leaf 0x801ED99C
    MemoryInline::FlatWriteRam16((r1 + 10), static_cast<uint16_t>(r3));
    r3 = r31;
    r4 = r29;
    r7 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 12), r30);
    r5 = 21;
    r6 = 0;
    r8 = 8;
    ctx->lr = 0x8011BE7Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8011BF38;
}

loc_8011BE80:
{
    r12 = MemoryInline::FlatRead32((r31 + 60));
    r0 = 6;
    MemoryInline::FlatWrite32((r3 + 16), r0);
    r5 = (r31 + 76);
    r3 = MemoryInline::FlatRead32((r3 + 68));
    r4 = MemoryInline::FlatRead32((r31 + 72));
    r6 = MemoryInline::FlatRead32((r31 + 64));
    ctr = r12;
    ctx->lr = 0x8011BEA4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r31 + 4));
}

loc_8011BEAC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_8011BEB8;
    }
}

loc_8011BEB0:
{
    r0 = -1;
    MemoryInline::FlatWrite32(r31, r0);
}

loc_8011BEB8:
{
    r0 = MemoryInline::FlatRead32((r13 + -26624));
    r30 = MemoryInline::FlatRead32((r31 + 8));
}

loc_8011BEC4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8011BED0;
    }
}

loc_8011BEC8:
{
    r30 = 0;
    goto loc_8011BF10;
}

loc_8011BED0:
{
    r31 = 0;
    goto loc_8011BEFC;
}

loc_8011BED8:
{
    r3 = MemoryInline::FlatRead32((r13 + -26624));
    r4 = r31;
    // inline leaf 0x800EF4B0 (12 guest instruction(s))
}

loc_inl2_0x800EF4B0:
{
}

loc_inl2_0x800EF4B4:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(0))) {
        goto loc_inl2_0x800EF4C4;
    }
}

loc_inl2_0x800EF4B8:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_inl2_0x800EF4C0:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_inl2_0x800EF4CC;
    }
}

loc_inl2_0x800EF4C4:
{
    r3 = 0;
    goto loc_inl2_cont_800EF4B0;
}

loc_inl2_0x800EF4CC:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 * r4);
    r3 = (r3 + r0);
}

loc_inl2_cont_800EF4B0:
{
    // end of inlined leaf 0x800EF4B0
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_8011BEEC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r30))) {
        goto loc_8011BEF8;
    }
}

loc_8011BEF0:
{
    r30 = r3;
    goto loc_8011BF10;
}

loc_8011BEF8:
{
    r31 = (r31 + 1);
}

loc_8011BEFC:
{
    r3 = MemoryInline::FlatRead32((r13 + -26624));
    // inline leaf 0x800EF4A8 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x800EF4A8
}

loc_8011BF08:
{
    if ((static_cast<int32_t>(r31) < static_cast<int32_t>(r3))) {
        goto loc_8011BED8;
    }
}

loc_8011BF0C:
{
    r30 = 0;
}

loc_8011BF10:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_8011BF14:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8011BF38;
    }
}

loc_8011BF18:
{
    r3 = MemoryInline::FlatRead32(r30);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-1));
}

loc_8011BF20:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8011BF28;
    }
}

loc_8011BF24:
{
    ctx->lr = 0x8011BF28u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800F11C4u>(ctx);
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8011BF28:
{
    r3 = -1;
    r0 = 4;
    MemoryInline::FlatWrite32(r30, r3);
    MemoryInline::FlatWrite32((r30 + 16), r0);
}

loc_8011BF38:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8011BD50 func_8011BD50 preserves=true fpr_mask=0x00000000
