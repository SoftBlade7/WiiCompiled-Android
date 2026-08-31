#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8053EC40(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8053EC40;

loc_8053EC40:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r4 + 2932));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_8053EC6C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053EC78;
    }
}

loc_8053EC70:
{
    r3 = 0;
    goto loc_8053ED50;
}

loc_8053EC78:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead8((r4 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8053EC84:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8053ED4C;
    }
}

loc_8053EC88:
{
    r4 = MemoryInline::FlatRead32((r3 + 268));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(1800));
}

loc_8053EC90:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8053ECA0;
    }
}

loc_8053EC94:
{
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r3 + 268), r0);
    goto loc_8053ED4C;
}

loc_8053ECA0:
{
    r4 = 0x808B0000u;
    r3 = 0x809C0000u;
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r0));
    r4 = (r4 + 11588);
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    r4 = (r1 + 8);
    MemoryInline::FlatWriteRam16((r1 + 12), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam16((r1 + 16), static_cast<uint16_t>(r0));
    // inline leaf 0x80535CA0 (29 guest instruction(s))
}

loc_inl0_0x80535CA0:
{
    r5 = MemoryInline::FlatRead32((r3 + 20));
}

loc_inl0_0x80535CA8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x80535CF8;
    }
}

loc_inl0_0x80535CAC:
{
    r0 = MemoryInline::FlatRead16((r5 + 20));
    MemoryInline::FlatWriteRam16((r4 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 22));
    MemoryInline::FlatWriteRam8((r4 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r5 + 24));
    MemoryInline::FlatWriteRam16((r4 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 26));
    MemoryInline::FlatWriteRam8((r4 + 10), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r0 = MemoryInline::FlatRead8((r3 + 64));
}

loc_inl0_0x80535CD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x80535CDC:
{
    r3 = 65536;
    r0 = 0;
    r3 = (r3 + -1);
    MemoryInline::FlatWriteRam16((r4 + 4), static_cast<uint16_t>(r3));
    MemoryInline::FlatWriteRam8((r4 + 6), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam16((r4 + 8), static_cast<uint16_t>(r0));
    goto loc_inl0_cont_80535CA0;
}

loc_inl0_0x80535CF8:
{
    r0 = 0;
    r3 = 1;
    MemoryInline::FlatWriteRam8((r4 + 10), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam16((r4 + 4), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam8((r4 + 6), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam16((r4 + 8), static_cast<uint16_t>(r0));
    goto loc_inl0_cont_80535CA0;
}

loc_inl0_return:
{
}

loc_inl0_cont_80535CA0:
{
    // end of inlined leaf 0x80535CA0
    r0 = MemoryInline::FlatRead16((r1 + 12));
    r3 = MemoryInline::FlatRead8((r1 + 14));
    r0 = (r0 * 60);
    r4 = MemoryInline::FlatRead16((r1 + 16));
    r0 = (r3 + r0);
    r0 = (r0 * 1000);
    r3 = (r4 + r0);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(60000));
}

loc_8053ECF0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8053ED4C;
    }
}

loc_8053ECF4:
{
    r0 = MemoryInline::FlatRead32((r30 + 272));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8053ECFC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8053ED4C;
    }
}

loc_8053ED00:
{
    r31 = 0;
}

loc_8053ED04:
{
    r3 = (r30 + r31);
    r0 = MemoryInline::FlatRead8((r3 + 264));
}

loc_8053ED10:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_8053ED3C;
    }
}

loc_8053ED14:
{
    r3 = MemoryInline::FlatRead32((r30 + 4));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1020);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8053ED2C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053ED3C;
    }
}

loc_8053ED30:
{
    r4 = 3;
    r5 = 1;
    ctx->lr = 0x8053ED3Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805342E8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8053ED3C:
{
    r31 = (r31 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(2));
}

loc_8053ED44:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8053ED04;
    }
}

loc_8053ED48:
{
    r31 = 1;
}

loc_8053ED4C:
{
    r3 = r31;
}

loc_8053ED50:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8053EC40 func_8053EC40 preserves=true fpr_mask=0x00000000
