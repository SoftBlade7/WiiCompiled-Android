#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805943B4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805943B4;

loc_805943B4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = 0x80890000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r5 + 7920));
    r5 = 0x808B0000u;
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r5 = (r5 + 25908);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 164u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r5);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r0);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 16), r0);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 20), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 28), r0);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 36u, (r3 + 36), f0.d);
    MemoryInline::WriteResolved32(guest_range_0, 128u, (r3 + 128), r0);
    MemoryInline::WriteResolved32(guest_range_0, 160u, (r3 + 160), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_0, 48u, (r3 + 48), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 44u, (r3 + 44), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r3 + 40), f0.d);
    r3 = 12;
    ctx->lr = 0x80594420u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80594424:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8059442C;
    }
}

loc_80594428:
{
    ctx->lr = 0x8059442Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8059018Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_8059442C:
{
    MemoryInline::FlatWrite32((r30 + 24), r3);
    r3 = 0x809C0000u;
    r0 = MemoryInline::FlatRead8((r31 + 16));
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = (r0 * 240);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 56));
}

loc_8059444C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80594464;
    }
}

loc_80594450:
{
}

loc_80594454:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80594474;
    }
}

loc_80594458:
{
}

loc_8059445C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80594484;
    }
}

loc_80594460:
{
    goto loc_80594490;
}

loc_80594464:
{
    r0 = MemoryInline::FlatRead32((r30 + 20));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32((r30 + 20), r0);
    goto loc_80594490;
}

loc_80594474:
{
    r0 = MemoryInline::FlatRead32((r30 + 20));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r30 + 20), r0);
    goto loc_80594490;
}

loc_80594484:
{
    r0 = MemoryInline::FlatRead32((r30 + 20));
    r0 = (r0 | 64);
    MemoryInline::FlatWrite32((r30 + 20), r0);
}

loc_80594490:
{
    r3 = 0x809C0000u;
    r0 = MemoryInline::FlatRead8((r3 + 6480));
}

loc_8059449C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805944B0;
    }
}

loc_805944A0:
{
    r0 = MemoryInline::FlatRead32((r30 + 20));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite32((r30 + 20), r0);
    goto loc_805944CC;
}

loc_805944B0:
{
    r3 = 0x809C0000u;
    r0 = MemoryInline::FlatRead8((r3 + 6481));
}

loc_805944BC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805944CC;
    }
}

loc_805944C0:
{
    r0 = MemoryInline::FlatRead32((r30 + 20));
    r0 = (r0 | 8);
    MemoryInline::FlatWrite32((r30 + 20), r0);
}

loc_805944CC:
{
    r3 = 0x809C0000u;
    r0 = MemoryInline::FlatRead8((r31 + 16));
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    r3 = MemoryInline::FlatRead32((r3 + 72));
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_805944F0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805944FC;
    }
}

loc_805944F4:
{
    r0 = MemoryInline::FlatRead8((r3 + 81));
    goto loc_80594500;
}

loc_805944FC:
{
    r0 = 0;
}

loc_80594500:
{
}

loc_80594504:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80594514;
    }
}

loc_80594508:
{
    r0 = MemoryInline::FlatRead32((r30 + 20));
    r0 = (r0 | 16);
    MemoryInline::FlatWrite32((r30 + 20), r0);
}

loc_80594514:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2928));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(11));
}

loc_80594524:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80594540;
    }
}

loc_80594528:
{
    r0 = MemoryInline::FlatRead32((r3 + 2932));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(12));
}

loc_80594530:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80594540;
    }
}

loc_80594534:
{
    r0 = MemoryInline::FlatRead32((r30 + 20));
    r0 = (r0 | 2560);
    MemoryInline::FlatWrite32((r30 + 20), r0);
}

loc_80594540:
{
    r3 = r30;
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFDF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFE fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805943B4 func_805943B4 preserves=true fpr_mask=0x00000000
