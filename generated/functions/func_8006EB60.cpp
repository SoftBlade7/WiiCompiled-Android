#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8006EB60(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
    uint32_t r8_rot_4 = 0;
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
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8006EB60;

loc_8006EB60:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 220), 0, 12u, true, false);
    r6 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 228));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r6));
}

loc_8006EB7C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8006ECD4;
    }
}

loc_8006EB80:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 224));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
}

loc_8006EB88:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8006ECD4;
    }
}

loc_8006EB8C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8006EB90:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006ECD4;
    }
}

loc_8006EB94:
{
    r0 = MemoryInline::FlatRead32((r5 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8006EB9C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8006ECD4;
    }
}

loc_8006EBA0:
{
    SetCRResident(cr, xer, 1, static_cast<uint32_t>(r6), static_cast<uint32_t>(r4));
}

loc_8006EBA4:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_8006EC90;
    }
}

loc_8006EBA8:
{
    r0 = (r6 - r4);
    r7 = (r4 + 8);
}

loc_8006EBB4:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(8))) {
        goto loc_8006EC64;
    }
}

loc_8006EBB8:
{
    if (((cr & 0x08000000u) != 0)) {
        goto loc_8006EC64;
    }
}

loc_8006EBBC:
{
    r0 = (r6 + 7);
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r8 = (r8_rot_1 & -4);
    r0 = (r0 - r7);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_8006EBD4:
{
    if ((static_cast<uint32_t>(r6) <= static_cast<uint32_t>(r7))) {
        goto loc_8006EC64;
    }
}

loc_8006EBD8:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 220));
    r6 = (r6 + -8);
    r7 = (r0 + r8);
    r0 = MemoryInline::FlatRead32((r7 + -4));
    MemoryInline::FlatWrite32(r7, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 220));
    r7 = (r0 + r8);
    r0 = MemoryInline::FlatRead32((r7 + -8));
    MemoryInline::FlatWrite32((r7 + -4), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 220));
    r7 = (r0 + r8);
    r0 = MemoryInline::FlatRead32((r7 + -12));
    MemoryInline::FlatWrite32((r7 + -8), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 220));
    r7 = (r0 + r8);
    r0 = MemoryInline::FlatRead32((r7 + -16));
    MemoryInline::FlatWrite32((r7 + -12), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 220));
    r7 = (r0 + r8);
    r0 = MemoryInline::FlatRead32((r7 + -20));
    MemoryInline::FlatWrite32((r7 + -16), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 220));
    r7 = (r0 + r8);
    r0 = MemoryInline::FlatRead32((r7 + -24));
    MemoryInline::FlatWrite32((r7 + -20), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 220));
    r7 = (r0 + r8);
    r0 = MemoryInline::FlatRead32((r7 + -28));
    MemoryInline::FlatWrite32((r7 + -24), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 220));
    r7 = (r0 + r8);
    r8 = (r8 + -32);
    r0 = MemoryInline::FlatRead32((r7 + -32));
    MemoryInline::FlatWrite32((r7 + -28), r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8006EBD8;
    }
}

loc_8006EC64:
{
    r0 = (r6 - r4);
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r7 = (r7_rot_1 & -4);
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r4));
}

loc_8006EC74:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8006EC90;
    }
}

loc_8006EC78:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 220));
    r6 = (r0 + r7);
    r7 = (r7 + -4);
    r0 = MemoryInline::FlatRead32((r6 + -4));
    MemoryInline::FlatWrite32(r6, r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8006EC78;
    }
}

loc_8006EC90:
{
    r6 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 220));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r4 = 65536;
    r3 = r5;
    r6_addr_0 = (r6 + r0);
    MemoryInline::FlatWrite32(r6_addr_0, r5);
    r6 = r31;
    r4 = (r4 + 2);
    r5 = 0;
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8006ECC0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
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
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r31 + 228));
    r3 = 1;
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r31 + 228), r0);
    goto loc_8006ECD8;
}

loc_8006ECD4:
{
    r3 = 0;
}

loc_8006ECD8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8006EB60 func_8006EB60 preserves=true fpr_mask=0x00000000
