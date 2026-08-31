#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8086BC1C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_80537B88_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8086BC1C;

loc_8086BC1C:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    r5 = 0x808B0000u;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r5 = (r5 + 8404);
    MemoryInline::FlatWriteRam32((r1 + 60), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 56), r30);
    r30 = r4;
    ctx->lr = 0x8086BC44u;
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
    ctx->cr = cr;
    InvokeDirectCpu<0x8081A980u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = 0x808E0000u;
    r3 = 0x809C0000u;
    r4 = (r4 + -16416);
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 308u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r31, r4);
    r0 = MemoryInline::FlatRead32((r3 + 18272));
    MemoryInline::WriteResolved32(guest_range_0, 260u, (r31 + 260), r0);
    r3 = MemoryInline::FlatRead32(r30);
    r6 = MemoryInline::FlatRead16((r3 + 42));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    MemoryInline::WriteResolved32(guest_range_0, 264u, (r31 + 264), r6);
    r3 = MemoryInline::FlatRead32(r30);
    r5 = MemoryInline::FlatRead16((r3 + 44));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    MemoryInline::WriteResolved32(guest_range_0, 268u, (r31 + 268), r5);
    r4 = MemoryInline::FlatRead32(r30);
    r3 = MemoryInline::FlatRead16((r4 + 46));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r30 = MemoryInline::FlatRead16((r4 + 48));
    r30 = (r30 << 16);
    r30 = (static_cast<int32_t>(r30) >> 16);
    r0 = MemoryInline::FlatRead16((r4 + 50));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8086BC88:
{
    MemoryInline::WriteResolved32(guest_range_0, 276u, (r31 + 276), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8086BCAC;
    }
}

loc_8086BC90:
{
    r0 = -1;
    MemoryInline::WriteResolved32(guest_range_0, 272u, (r31 + 272), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 280u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 280u, (r31 + 280), r0);
        MemoryInline::WriteResolved32(guest_range_0, 284u, (r31 + 284), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 288u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 288u, (r31 + 288), r0);
        MemoryInline::WriteResolved32(guest_range_0, 292u, (r31 + 292), r0);
    }
    goto loc_8086BCD0;
}

loc_8086BCAC:
{
    r4 = PPC_Divwu(static_cast<uint32_t>(r30), static_cast<uint32_t>(r3));
    MemoryInline::WriteResolved32(guest_range_0, 280u, (r31 + 280), r6);
    MemoryInline::WriteResolved32(guest_range_0, 272u, (r31 + 272), r4);
    r0 = (r6 + r4);
    r3 = (r0 + r5);
    MemoryInline::WriteResolved32(guest_range_0, 284u, (r31 + 284), r0);
    r0 = (r3 + r4);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 288u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 288u, (r31 + 288), r3);
        MemoryInline::WriteResolved32(guest_range_0, 292u, (r31 + 292), r0);
    }
}

loc_8086BCD0:
{
    f2.d = MemoryInline::FlatReadFloat32((r31 + 48));
    r3 = r31;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 56));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 296u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 296u, (r31 + 296), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 300u, (r31 + 300), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 304u, (r31 + 304), f0.d);
    ctx->lr = 0x8086BCF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80821640u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    r3 = (r1 + 32);
    r4 = (r31 + 88);
    r5 = 2;
    // inline leaf 0x80537B80 (9 guest instruction(s))
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r5 = (r4 + r0);
    addr_lfsx_80537B88_loc_0 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80537B88_loc_0);
    f1.d = MemoryInline::FlatReadFloat32((r5 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 32));
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f2.d);
    // end of inlined leaf 0x80537B80
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 52), r30);
    r5 = 0x808B0000u;
    r3 = (r1 + 20);
    MemoryInline::FlatWriteRam32((r1 + 48), r0);
    r4 = (r1 + 32);
    f1.d = MemoryInline::FlatReadFloat64((r5 + 8392));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 48));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    // inline leaf 0x80514810 (10 guest instruction(s))
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    // end of inlined leaf 0x80514810
    r3 = (r1 + 8);
    r4 = (r31 + 296);
    r5 = (r1 + 20);
    // inline leaf 0x8051486C (13 guest instruction(s))
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x8051486C
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r3 = r31;
    MemoryInline::FlatWriteFloat32((r31 + 308), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r31 + 312), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r31 + 316), f0.d);
    ctx->lr = 0x8086BD58u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80821640u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    guest_range_2 = MemoryInline::ResolveRangeHost((r31 + 88), 0, 48u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r31 + 88));
    r5 = 0x809C0000u;
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 320), 0, 48u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, (r31 + 320), f0.d);
    r3 = r31;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 4u, (r31 + 92));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r31 + 324), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 8u, (r31 + 96));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r31 + 328), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 12u, (r31 + 100));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r31 + 332), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 16u, (r31 + 104));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r31 + 336), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 20u, (r31 + 108));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r31 + 340), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 24u, (r31 + 112));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r31 + 344), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 28u, (r31 + 116));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r31 + 348), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 32u, (r31 + 120));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r31 + 352), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 36u, (r31 + 124));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r31 + 356), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 40u, (r31 + 128));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r31 + 360), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 44u, (r31 + 132));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 44u, (r31 + 364), f0.d);
    r4 = MemoryInline::FlatRead32((r5 + 18272));
    r0 = (r4 + 1);
    MemoryInline::FlatWriteRam32((r5 + 18272), r0);
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r30 = MemoryInline::FlatRead32((r1 + 56));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFF018 fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8086BC1C func_8086BC1C preserves=true fpr_mask=0x00000000
