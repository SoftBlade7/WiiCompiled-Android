#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80560AFC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];

    goto loc_80560AFC;

loc_80560AFC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & 1020);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r5 = MemoryInline::FlatRead32((r3 + 20));
    r6 = MemoryInline::FlatRead32((r3 + 24));
    r4 = MemoryInline::FlatRead32((r5 + 12));
    r3 = r6;
    r4_addr_0 = (r4 + r0);
    r31 = MemoryInline::FlatRead32(r4_addr_0);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 32));
    MemoryInline::FlatWriteFloat32((r6 + 32), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 36));
    MemoryInline::FlatWriteFloat32((r6 + 36), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 40));
    MemoryInline::FlatWriteFloat32((r6 + 40), f0.d);
    // inline leaf 0x8022C260 (17 guest instruction(s))
    f2.d = MemoryInline::FlatReadFloat32((r3 + 32));
    f6.d = MemoryInline::FlatReadFloat32((r3 + 56));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 36));
    f5.d = PpcFmulsInline(f2.d, f6.d);
    f4.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 40));
    f3.d = PpcFmulsInline(f1.d, f6.d);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 24));
    f1.d = PpcFmulsInline(f0.d, f6.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 28));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f5.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 8), f4.d);
    MemoryInline::FlatWriteFloat32((r3 + 12), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 16), f0.d);
    // end of inlined leaf 0x8022C260
    r3 = MemoryInline::FlatRead32((r30 + 24));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 20));
    MemoryInline::FlatWriteFloat32((r3 + 20), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 24));
    MemoryInline::FlatWriteFloat32((r3 + 24), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 28));
    MemoryInline::FlatWriteFloat32((r3 + 28), f0.d);
    ctx->lr = 0x80560B68u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x8022C1BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    r3 = MemoryInline::FlatRead32((r30 + 24));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    MemoryInline::FlatWriteFloat32((r3 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 12));
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 16));
    MemoryInline::FlatWriteFloat32((r3 + 16), f0.d);
    ctx->lr = 0x80560B88u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x8022C1BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    guest_range_1 = MemoryInline::ResolveRangeHost((r30 + 24), 0, 4u, true, false);
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r30 + 24));
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 44), 0, 68u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r31 + 56));
    MemoryInline::FlatWriteFloat32((r3 + 56), f0.d);
    // inline leaf 0x8022C260 (17 guest instruction(s))
    f2.d = MemoryInline::FlatReadFloat32((r3 + 32));
    f6.d = MemoryInline::FlatReadFloat32((r3 + 56));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 36));
    f5.d = PpcFmulsInline(f2.d, f6.d);
    f4.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 40));
    f3.d = PpcFmulsInline(f1.d, f6.d);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 24));
    f1.d = PpcFmulsInline(f0.d, f6.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 28));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f5.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 8), f4.d);
    MemoryInline::FlatWriteFloat32((r3 + 12), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 16), f0.d);
    // end of inlined leaf 0x8022C260
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r30 + 24));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r31 + 52));
    MemoryInline::FlatWrite32((r3 + 52), r0);
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r30 + 24));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r31 + 48));
    MemoryInline::FlatWriteFloat32((r3 + 48), f0.d);
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r30 + 24));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r31 + 44));
    MemoryInline::FlatWrite8((r3 + 44), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r31 + 45));
    MemoryInline::FlatWrite8((r3 + 45), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r31 + 46));
    MemoryInline::FlatWrite8((r3 + 46), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r31 + 47));
    MemoryInline::FlatWrite8((r3 + 47), static_cast<uint8_t>(r0));
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r30 + 24));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r31 + 64));
    MemoryInline::FlatWrite32((r3 + 64), r0);
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r30 + 24));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r31 + 68));
    MemoryInline::FlatWriteFloat32((r3 + 68), f0.d);
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r30 + 24));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 64u, (r31 + 108));
    MemoryInline::FlatWrite32((r3 + 108), r0);
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r30 + 24));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 60u, (r31 + 104));
    MemoryInline::FlatWrite32((r3 + 104), r0);
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r30 + 24));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r31 + 72));
    MemoryInline::FlatWriteFloat32((r3 + 72), f0.d);
    r3 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r30 + 24));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r31 + 76));
    MemoryInline::FlatWriteFloat32((r3 + 76), f0.d);
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000001E gpr_write=0xC000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x0000007F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80560AFC func_80560AFC preserves=true fpr_mask=0x00000000
