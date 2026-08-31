#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80560648(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lbzux_805606D8_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r9_addr_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80560648;

loc_80560648:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r6 = 0x80890000u;
    r8_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r8 = (r8_rot_0 & 1020);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80560660:
{
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r7 = (r7_rot_0 & 2040);
    f0.d = MemoryInline::FlatReadFloat32((r6 + 5100));
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r0 = 0;
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = MemoryInline::FlatRead32((r3 + 20));
    r9 = MemoryInline::FlatRead32((r30 + 12));
    r9_addr_0 = (r9 + r8);
    r5 = MemoryInline::FlatRead32(r9_addr_0);
    guest_range_0 = MemoryInline::ResolveRangeHost((r5 + 8), 0, 40u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r5 + 20));
    guest_range_1 = MemoryInline::ResolveRangeHost((r3 + 33), 0, 52u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 11u, (r3 + 44), f2.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r5 + 24));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 15u, (r3 + 48), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r5 + 28));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 19u, (r3 + 52), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r5 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 23u, (r3 + 56), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r5 + 12));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 27u, (r3 + 60), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r5 + 16));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 31u, (r3 + 64), f1.d);
    r12 = MemoryInline::ReadResolved8(guest_range_0, 36u, (r5 + 44));
    MemoryInline::WriteResolved8(guest_range_1, 35u, (r3 + 68), static_cast<uint8_t>(r12));
    r11 = MemoryInline::ReadResolved8(guest_range_0, 37u, (r5 + 45));
    MemoryInline::WriteResolved8(guest_range_1, 36u, (r3 + 69), static_cast<uint8_t>(r11));
    r10 = MemoryInline::ReadResolved8(guest_range_0, 38u, (r5 + 46));
    MemoryInline::WriteResolved8(guest_range_1, 37u, (r3 + 70), static_cast<uint8_t>(r10));
    r9 = MemoryInline::ReadResolved8(guest_range_0, 39u, (r5 + 47));
    MemoryInline::WriteResolved8(guest_range_1, 38u, (r3 + 71), static_cast<uint8_t>(r9));
    r5 = MemoryInline::FlatRead32((r30 + 16));
    addr_lbzux_805606D8_loc_0 = (r5 + r7);
    r8 = MemoryInline::FlatRead8(addr_lbzux_805606D8_loc_0);
    r5 = addr_lbzux_805606D8_loc_0;
    MemoryInline::WriteResolved8(guest_range_1, 39u, (r3 + 72), static_cast<uint8_t>(r8));
    r7 = MemoryInline::FlatRead8((r5 + 1));
    MemoryInline::WriteResolved8(guest_range_1, 40u, (r3 + 73), static_cast<uint8_t>(r7));
    r6 = MemoryInline::FlatRead8((r5 + 2));
    MemoryInline::WriteResolved8(guest_range_1, 41u, (r3 + 74), static_cast<uint8_t>(r6));
    r5 = MemoryInline::FlatRead8((r5 + 3));
    MemoryInline::WriteResolved8(guest_range_1, 42u, (r3 + 75), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 43u, (r3 + 76), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_1, 44u, (r3 + 77), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 45u, (r3 + 78), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 46u, (r3 + 79), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 47u, (r3 + 80), f0.d);
    MemoryInline::WriteResolved8(guest_range_1, 51u, (r3 + 84), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 7u, (r3 + 40), f0.d);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r3 + 33), static_cast<uint8_t>(r4));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805607E4;
    }
}

loc_8056071C:
{
    r4 = MemoryInline::FlatRead32((r3 + 24));
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 16), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, (r1 + 16), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteFloat32((r4 + 20), f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 48));
    MemoryInline::FlatWriteFloat32((r4 + 24), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 52));
    r3 = r4;
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r1 + 17), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r1 + 18), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r1 + 19), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r1 + 20), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r1 + 21), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r1 + 22), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r1 + 23), static_cast<uint8_t>(r9));
    MemoryInline::FlatWriteFloat32((r4 + 28), f0.d);
    ctx->lr = 0x8056075Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022C1BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r31 + 24));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 56));
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 60));
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 64));
    MemoryInline::FlatWriteFloat32((r3 + 16), f0.d);
    ctx->lr = 0x8056077Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8022C1BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = MemoryInline::FlatRead32((r31 + 24));
    r0 = MemoryInline::FlatRead8((r1 + 8));
    MemoryInline::FlatWrite8((r3 + 44), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 9));
    MemoryInline::FlatWrite8((r3 + 45), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 10));
    MemoryInline::FlatWrite8((r3 + 46), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 11));
    MemoryInline::FlatWrite8((r3 + 47), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32((r1 + 16));
    r0 = MemoryInline::FlatRead32((r31 + 28));
    r3 = MemoryInline::FlatRead32((r31 + 20));
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & 2040);
    r4 = MemoryInline::FlatRead32((r3 + 16));
    r3 = MemoryInline::FlatRead8((r1 + 12));
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead8((r1 + 13));
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead8((r1 + 14));
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r1 + 15));
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r0));
}

loc_805607E4:
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
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000017E gpr_write=0xC0001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80560648 func_80560648 preserves=true fpr_mask=0x00000000
