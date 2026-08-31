#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807162B4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807162B4;

loc_807162B4:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r5 = 0x808A0000u;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r5 = (r5 + 7968);
    r4 = MemoryInline::FlatRead32((r3 + 16));
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 10232));
    r0 = (r4 + -25);
    r4 = 0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
}

loc_807162E0:
{
    r0 = MemoryInline::FlatRead8((r3 + 76));
    if (((cr & 0x40000000u) != 0)) {
        goto loc_807162F0;
    }
}

loc_807162E8:
{
    r4 = 1;
    goto loc_807162FC;
}

loc_807162F0:
{
}

loc_807162F4:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(2))) {
        goto loc_807162FC;
    }
}

loc_807162F8:
{
    r4 = 1;
}

loc_807162FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80716300:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807163F4;
    }
}

loc_80716304:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r5, 0, 72u, true, false);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r5 + 36));
    r3 = 0x809C0000u;
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r5 + 4));
    r4 = 5;
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r5 + 40));
    r0 = 0;
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 44u);
        if (resolved_pair.valid) {
            f3.d = PpcBitCastToFloatInline(resolved_pair.first);
            f2.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r5 + 44));
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 48u, (r5 + 48));
        }
    }
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r5);
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 40u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, (r1 + 8), f5.d);
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 4u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f4.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f3.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r1 + 12), f4.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r1 + 16), f3.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 12u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f2.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 12u, (r1 + 20), f2.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 16u, (r1 + 24), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f5.d))))) {
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r1 + 28), r4);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r1 + 32), f5.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r1 + 36), r0);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r1 + 40), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r1 + 44), f1.d);
    r0 = MemoryInline::FlatRead32((r3 + 2920));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8071635C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8071637C;
    }
}

loc_80716360:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(26));
}

loc_80716364:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8071639C;
    }
}

loc_80716368:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(27));
}

loc_8071636C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807163BC;
    }
}

loc_80716370:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(29));
}

loc_80716374:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807163BC;
    }
}

loc_80716378:
{
    goto loc_807163E4;
}

loc_8071637C:
{
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 64u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 64u, (r5 + 64));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 68u, (r5 + 68));
        }
    }
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f1.d);
    MemoryInline::FlatWriteRam32((r1 + 36), r4);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    goto loc_807163E4;
}

loc_8071639C:
{
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 64u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 64u, (r5 + 64));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 68u, (r5 + 68));
        }
    }
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f1.d);
    MemoryInline::FlatWriteRam32((r1 + 36), r4);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    goto loc_807163E4;
}

loc_807163BC:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 64u, (r5 + 64));
    r0 = 5;
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 40u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r5 + 40));
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r5 + 44));
        }
    }
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 68u, (r5 + 68));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f3.d);
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
}

loc_807163E4:
{
    r3 = 0x809C0000u;
    r4 = (r1 + 8);
    r3 = MemoryInline::FlatRead32((r3 + 9048));
    ctx->lr = 0x807163F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x806FE8ACu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_807163F4:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFBF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807162B4 func_807162B4 preserves=true fpr_mask=0x00000000
