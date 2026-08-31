#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80887D8C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r3_addr_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];

    goto loc_80887D8C;

loc_80887D8C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r6 = 0x808B0000u;
    r5 = 0x802A0000u;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r7 = 0x808B0000u;
    f0.d = MemoryInline::FlatReadFloat32((r6 + 10000));
    r6 = 0x802A0000u;
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 44), r31);
    r5 = (r5 + 16640);
    r6 = (r6 + 16712);
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 40), r30);
    r30 = r4;
    r4 = (r7 + 10024);
    r7 = (r1 + 8);
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r29);
    r29 = r3;
    r8 = (r4 + 5);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r1 + 8), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r1 + 12), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 16u, (r1 + 16), f0.d);
    ctx->lr = 0x80887DE4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    InvokeDirectCpu<0x8081F064u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    r3 = 0x808E0000u;
    MemoryInline::FlatWrite8((r29 + 177), static_cast<uint8_t>(r30));
    r3 = (r3 + -12448);
    r31 = 0x809C0000u;
    MemoryInline::FlatWrite32(r29, r3);
    r3 = 0x809C0000u;
    r4 = r30;
    r5 = MemoryInline::FlatRead32((r31 + -10456));
    r0 = MemoryInline::FlatRead8((r5 + 37));
    MemoryInline::FlatWrite8((r29 + 176), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r3 + 6392));
    // inline leaf 0x80590100 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    // end of inlined leaf 0x80590100
    r4 = MemoryInline::FlatRead8((r29 + 177));
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 192), r3);
    r3 = r29;
    r4 = (r4 * 240);
    r5 = MemoryInline::FlatRead32((r31 + -10456));
    r4 = (r5 + r4);
    r4 = MemoryInline::FlatRead32((r4 + 56));
    r4 = PPC_CntlzwInline(static_cast<uint32_t>(r4));
    MemoryInline::FlatWrite8((r29 + 208), static_cast<uint8_t>(r0));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 134217727);
    MemoryInline::FlatWrite8((r29 + 178), static_cast<uint8_t>(r0));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFF61E gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFE00 fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80887D8C func_80887D8C preserves=true fpr_mask=0x00000000
