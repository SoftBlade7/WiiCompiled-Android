#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805A6C58(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805A6C58;

loc_805A6C58:
{
    MemoryInline::FlatWriteRam32((r1 + -176), r1);
    r1 = (r1 + -176);
    r0 = ctx->lr;
    r7 = 0x80890000u;
    r6 = 0x802A0000u;
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    r7 = (r7 + 8728);
    f3.d = MemoryInline::FlatReadFloat32(r7);
    r6 = (r6 + 10688);
    MemoryInline::FlatWriteRam32((r1 + 172), r31);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_805A6C80:
{
    f2.d = MemoryInline::FlatReadFloat32((r7 + 244));
    r31 = r4;
    f0.d = MemoryInline::FlatReadFloat32((r7 + 248));
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 152u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 16u, (r1 + 24), r6);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 116u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f2.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 116u, (r1 + 124), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 120u, (r1 + 128), f2.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 124u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 124u, (r1 + 132), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 128u, (r1 + 136), f3.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 132u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 132u, (r1 + 140), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 136u, (r1 + 144), f3.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 140u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f3.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 140u, (r1 + 148), f3.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 144u, (r1 + 152), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 148u, (r1 + 156), f3.d);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 100), 0, 36u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r3 + 112));
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r3 + 100));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r3 + 116));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f7.d));
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r3 + 104));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r3 + 120));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f6.d));
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 108));
    f0.d = PpcFmulsInline(f3.d, f1.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f5.d));
    f4.d = PpcFmulsInline(f4.d, f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 0u, (r1 + 8), f0.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f0.d));
    f3.d = PpcFmulsInline(f3.d, f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 4u, (r1 + 12), f4.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f4.d));
    MemoryInline::WriteResolvedFloat32(guest_range_2, 8u, (r1 + 16), f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f3.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 116u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 116u, (r1 + 124), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 120u, (r1 + 128), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 124u, (r1 + 132), f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805A6D20;
    }
}

loc_805A6D0C:
{
    MemoryInline::FlatWriteFloat32(r5, f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 128));
    MemoryInline::FlatWriteFloat32((r5 + 4), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 132));
    MemoryInline::FlatWriteFloat32((r5 + 8), f0.d);
}

loc_805A6D20:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r3 + 112));
    MemoryInline::FlatWriteRamFloat32((r1 + 136), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r3 + 116));
    MemoryInline::FlatWriteRamFloat32((r1 + 140), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r3 + 120));
    MemoryInline::FlatWriteRamFloat32((r1 + 144), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r3 + 124));
    MemoryInline::FlatWriteRamFloat32((r1 + 148), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r3 + 128));
    MemoryInline::FlatWriteRamFloat32((r1 + 152), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r3 + 132));
    r3 = (r1 + 24);
    MemoryInline::FlatWriteRamFloat32((r1 + 156), f0.d);
    ctx->lr = 0x805A6D58u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->cr = cr;
    InvokeDirectCpu<0x80214770u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    cr = ctx->cr;
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 28), 0, 156u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 0u, (r1 + 28));
    guest_range_1 = MemoryInline::ResolveRangeHost(r31, 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, r31, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 4u, (r1 + 32));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r31 + 4), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 8u, (r1 + 36));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r31 + 8), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 12u, (r1 + 40));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r31 + 12), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 16u, (r1 + 44));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r31 + 16), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 20u, (r1 + 48));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r31 + 20), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 24u, (r1 + 52));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r31 + 24), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 28u, (r1 + 56));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r31 + 28), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 32u, (r1 + 60));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r31 + 32), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 36u, (r1 + 64));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r31 + 36), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 40u, (r1 + 68));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r31 + 40), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_3, 44u, (r1 + 72));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r31 + 44), f0.d);
    r31 = MemoryInline::ReadResolved32(guest_range_3, 144u, (r1 + 172));
    r0 = MemoryInline::ReadResolved32(guest_range_3, 152u, (r1 + 180));
    ctx->lr = r0;
    r1 = (r1 + 176);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x800000FE gpr_write=0x800000FB gpr_return=0x00000018 fpr_read=0x8000000A fpr_write=0x800007FF fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805A6C58 func_805A6C58 preserves=true fpr_mask=0x00000000
