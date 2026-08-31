#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805607FC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

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

    goto loc_805607FC;

loc_805607FC:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 36u, (r1 + 36), r0);
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r1 + 28), r31);
    r31 = r3;
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r1 + 24), r30);
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 32), 0, 53u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r4 + 32));
    MemoryInline::FlatWrite8((r3 + 32), static_cast<uint8_t>(r0));
    r30 = MemoryInline::FlatRead32((r3 + 24));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r4 + 33));
    MemoryInline::FlatWrite8((r3 + 33), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r4 + 36));
    MemoryInline::FlatWriteFloat32((r3 + 36), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r4 + 40));
    MemoryInline::FlatWriteFloat32((r3 + 40), f0.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r4 + 44));
    MemoryInline::FlatWriteFloat32((r3 + 44), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r4 + 48));
    MemoryInline::FlatWriteFloat32((r3 + 48), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r4 + 52));
    MemoryInline::FlatWriteFloat32((r3 + 52), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r4 + 56));
    MemoryInline::FlatWriteFloat32((r3 + 56), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r4 + 60));
    MemoryInline::FlatWriteFloat32((r3 + 60), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r4 + 64));
    MemoryInline::FlatWriteFloat32((r3 + 64), f0.d);
    r12 = MemoryInline::ReadResolved8(guest_range_0, 36u, (r4 + 68));
    MemoryInline::FlatWrite8((r3 + 68), static_cast<uint8_t>(r12));
    r11 = MemoryInline::ReadResolved8(guest_range_0, 37u, (r4 + 69));
    MemoryInline::FlatWrite8((r3 + 69), static_cast<uint8_t>(r11));
    r10 = MemoryInline::ReadResolved8(guest_range_0, 38u, (r4 + 70));
    MemoryInline::FlatWrite8((r3 + 70), static_cast<uint8_t>(r10));
    r9 = MemoryInline::ReadResolved8(guest_range_0, 39u, (r4 + 71));
    MemoryInline::FlatWrite8((r3 + 71), static_cast<uint8_t>(r9));
    r8 = MemoryInline::ReadResolved8(guest_range_0, 40u, (r4 + 72));
    MemoryInline::FlatWrite8((r3 + 72), static_cast<uint8_t>(r8));
    r7 = MemoryInline::ReadResolved8(guest_range_0, 41u, (r4 + 73));
    MemoryInline::FlatWrite8((r3 + 73), static_cast<uint8_t>(r7));
    r6 = MemoryInline::ReadResolved8(guest_range_0, 42u, (r4 + 74));
    MemoryInline::FlatWrite8((r3 + 74), static_cast<uint8_t>(r6));
    r5 = MemoryInline::ReadResolved8(guest_range_0, 43u, (r4 + 75));
    MemoryInline::FlatWrite8((r3 + 75), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 76), static_cast<uint8_t>(r8));
    MemoryInline::FlatWrite8((r3 + 77), static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r3 + 78), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 79), static_cast<uint8_t>(r5));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 48u, (r4 + 80));
    MemoryInline::FlatWriteFloat32((r3 + 80), f0.d);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 52u, (r4 + 84));
    MemoryInline::FlatWrite8((r3 + 84), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteFloat32((r30 + 20), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 48));
    MemoryInline::FlatWriteFloat32((r30 + 24), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 52));
    r3 = r30;
    MemoryInline::WriteResolved8(guest_range_1, 16u, (r1 + 16), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_1, 17u, (r1 + 17), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_1, 18u, (r1 + 18), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_1, 19u, (r1 + 19), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 20u, (r1 + 20), static_cast<uint8_t>(r12));
    MemoryInline::WriteResolved8(guest_range_1, 21u, (r1 + 21), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_1, 22u, (r1 + 22), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_1, 23u, (r1 + 23), static_cast<uint8_t>(r9));
    MemoryInline::FlatWriteFloat32((r30 + 28), f0.d);
    ctx->lr = 0x80560904u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x8022C1BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    r3 = MemoryInline::FlatRead32((r31 + 24));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 56));
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 60));
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 64));
    MemoryInline::FlatWriteFloat32((r3 + 16), f0.d);
    ctx->lr = 0x80560924u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    InvokeDirectCpu<0x8022C1BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
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
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & 2040);
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
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r0 = MemoryInline::FlatRead32((r1 + 36));
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000001E gpr_write=0xC0001FFB gpr_return=0x00000018 fpr_read=0x00000004 fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805607FC func_805607FC preserves=true fpr_mask=0x00000000
