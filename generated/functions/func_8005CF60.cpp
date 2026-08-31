#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8005CF60(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8005CF60;

loc_8005CF60:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(1));
}

loc_8005CF6C:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r5;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8005CF90;
    }
}

loc_8005CF84:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8005CF88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8005D0FC;
    }
}

loc_8005CF8C:
{
    goto loc_8005D110;
}

loc_8005CF90:
{
    r0 = MemoryInline::FlatRead32(r4);
    r4 = r31;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = (r1 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004E3A0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r3 + 100));
}

loc_8005CFAC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8005CFB8;
    }
}

loc_8005CFB0:
{
    r4 = (r3 + r0);
    goto loc_8005CFF8;
}

loc_8005CFB8:
{
    r4 = 0;
    goto loc_8005CFF8;
}

loc_8005CFC0:
{
    r0 = MemoryInline::FlatRead32((r3 + 92));
}

loc_8005CFC8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8005CFD4;
    }
}

loc_8005CFCC:
{
    r3 = (r3 + r0);
    goto loc_8005CFD8;
}

loc_8005CFD4:
{
    r3 = 0;
}

loc_8005CFD8:
{
}

loc_8005CFDC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8005D000;
    }
}

loc_8005CFE0:
{
    r0 = MemoryInline::FlatRead32((r3 + 100));
}

loc_8005CFE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8005CFF4;
    }
}

loc_8005CFEC:
{
    r4 = (r3 + r0);
    goto loc_8005CFF8;
}

loc_8005CFF4:
{
    r4 = 0;
}

loc_8005CFF8:
{
}

loc_8005CFFC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8005CFC0;
    }
}

loc_8005D000:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8005D004:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8005D01C;
    }
}

loc_8005D008:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8005D014;
    }
}

loc_8005D00C:
{
    r3 = MemoryInline::FlatRead32((r4 + 12));
    goto loc_8005D024;
}

loc_8005D014:
{
    r3 = 0;
    goto loc_8005D024;
}

loc_8005D01C:
{
    r3 = (r1 + 8);
    // inline leaf 0x8004E400 (13 guest instruction(s))
}

loc_inl0_0x8004E400:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_inl0_0x8004E40C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x8004E418;
    }
}

loc_inl0_0x8004E410:
{
    r3 = (r3 + r0);
    goto loc_inl0_0x8004E41C;
}

loc_inl0_0x8004E418:
{
    r3 = 0;
}

loc_inl0_0x8004E41C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_inl0_0x8004E420:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl0_0x8004E42C;
    }
}

loc_inl0_0x8004E424:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_inl0_cont_8004E400;
}

loc_inl0_0x8004E42C:
{
    r3 = 0;
}

loc_inl0_cont_8004E400:
{
    // end of inlined leaf 0x8004E400
}

loc_8005D024:
{
    SetCRResident(cr, xer, 1, static_cast<uint32_t>(r31), static_cast<uint32_t>(r3));
}

loc_8005D028:
{
    if (((cr & 0x08000000u) == 0)) {
        goto loc_8005D110;
    }
}

loc_8005D02C:
{
    r0 = (r3 - r31);
    r6 = (r3 + -8);
}

loc_8005D038:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(8))) {
        goto loc_8005D0CC;
    }
}

loc_8005D03C:
{
    if (((cr & 0x04000000u) != 0)) {
        goto loc_8005D0CC;
    }
}

loc_8005D040:
{
    r0 = (r6 + 7);
    r4 = 65536;
    r0 = (r0 - r31);
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(1));
    r7 = (r7_rot_1 & -2);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_2 & 536870911);
    r5 = (r4 + -32768);
    ctr = r0;
}

loc_8005D060:
{
    if ((static_cast<uint32_t>(r31) >= static_cast<uint32_t>(r6))) {
        goto loc_8005D0CC;
    }
}

loc_8005D064:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 20), 0, 4u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r30 + 20));
    r31 = (r31 + 8);
    r4_addr_2 = (r4 + r7);
    MemoryInline::FlatWrite16(r4_addr_2, static_cast<uint16_t>(r5));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r30 + 20));
    r4 = (r0 + r7);
    MemoryInline::FlatWrite16((r4 + 2), static_cast<uint16_t>(r5));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r30 + 20));
    r4 = (r0 + r7);
    MemoryInline::FlatWrite16((r4 + 4), static_cast<uint16_t>(r5));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r30 + 20));
    r4 = (r0 + r7);
    MemoryInline::FlatWrite16((r4 + 6), static_cast<uint16_t>(r5));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r30 + 20));
    r4 = (r0 + r7);
    MemoryInline::FlatWrite16((r4 + 8), static_cast<uint16_t>(r5));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r30 + 20));
    r4 = (r0 + r7);
    MemoryInline::FlatWrite16((r4 + 10), static_cast<uint16_t>(r5));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r30 + 20));
    r4 = (r0 + r7);
    MemoryInline::FlatWrite16((r4 + 12), static_cast<uint16_t>(r5));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r30 + 20));
    r4 = (r0 + r7);
    r7 = (r7 + 16);
    MemoryInline::FlatWrite16((r4 + 14), static_cast<uint16_t>(r5));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8005D064;
    }
}

loc_8005D0CC:
{
    r4 = 65536;
    r0 = (r3 - r31);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(1));
    r5 = (r5_rot_1 & -2);
    r4 = (r4 + -32768);
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(r3));
}

loc_8005D0E4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8005D110;
    }
}

loc_8005D0E8:
{
    r3 = MemoryInline::FlatRead32((r30 + 20));
    r3_addr_3 = (r3 + r5);
    MemoryInline::FlatWrite16(r3_addr_3, static_cast<uint16_t>(r4));
    r5 = (r5 + 2);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8005D0E8;
    }
}

loc_8005D0F8:
{
    goto loc_8005D110;
}

loc_8005D0FC:
{
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r4 = 65536;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r4 = (r4 + -32768);
    r3_addr_1 = (r3 + r0);
    MemoryInline::FlatWrite16(r3_addr_1, static_cast<uint16_t>(r4));
}

loc_8005D110:
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
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC00000FB gpr_write=0xC00000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8005CF60 func_8005CF60 preserves=true fpr_mask=0x00000000
