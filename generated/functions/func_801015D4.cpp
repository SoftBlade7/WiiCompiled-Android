#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801015D4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

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

    goto loc_801015D4;

loc_801015D4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801015F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80101610;
    }
}

loc_801015FC:
{
    r3 = (r4 + 8);
    r4 = r0;
    r5 = 31;
    ctx->lr = 0x8010160Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80108E78u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80101618;
}

loc_80101610:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r4 + 8), static_cast<uint8_t>(r0));
}

loc_80101618:
{
    r4 = MemoryInline::FlatRead32((r30 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80101620:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80101634;
    }
}

loc_80101624:
{
    r3 = (r31 + 39);
    r5 = 21;
    ctx->lr = 0x80101630u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80108E78u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8010163C;
}

loc_80101634:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 39), static_cast<uint8_t>(r0));
}

loc_8010163C:
{
    r4 = MemoryInline::FlatRead32((r30 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80101644:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80101658;
    }
}

loc_80101648:
{
    r3 = (r31 + 60);
    r5 = 51;
    ctx->lr = 0x80101654u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80108E78u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80101660;
}

loc_80101658:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 60), static_cast<uint8_t>(r0));
}

loc_80101660:
{
    r4 = MemoryInline::FlatRead32((r30 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80101668:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8010167C;
    }
}

loc_8010166C:
{
    r3 = (r31 + 111);
    r5 = 31;
    ctx->lr = 0x80101678u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80108E78u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80101684;
}

loc_8010167C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 111), static_cast<uint8_t>(r0));
}

loc_80101684:
{
    r4 = MemoryInline::FlatRead32((r30 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8010168C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801016A0;
    }
}

loc_80101690:
{
    r3 = (r31 + 142);
    r5 = 31;
    ctx->lr = 0x8010169Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80108E78u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_801016A8;
}

loc_801016A0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 142), static_cast<uint8_t>(r0));
}

loc_801016A8:
{
    r4 = MemoryInline::FlatRead32((r30 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801016B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801016C4;
    }
}

loc_801016B4:
{
    r3 = (r31 + 173);
    r5 = 76;
    ctx->lr = 0x801016C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80108E78u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_801016CC;
}

loc_801016C4:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 173), static_cast<uint8_t>(r0));
}

loc_801016CC:
{
    r0 = MemoryInline::FlatRead32((r30 + 24));
    r3 = (r31 + 256);
    r4 = (r30 + 28);
    r5 = 11;
    MemoryInline::FlatWrite32((r31 + 252), r0);
    ctx->lr = 0x801016E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80108E78u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r31 + 267);
    r4 = (r30 + 39);
    r5 = 3;
    ctx->lr = 0x801016F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80108E78u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat32((r30 + 44));
    r4 = (r30 + 52);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r30)) + static_cast<uint64_t>(static_cast<uint32_t>(52)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801016FC:
{
    MemoryInline::FlatWriteFloat32((r31 + 272), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r30 + 48));
    MemoryInline::FlatWriteFloat32((r31 + 276), f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8010171C;
    }
}

loc_8010170C:
{
    r3 = (r31 + 280);
    r5 = 128;
    ctx->lr = 0x80101718u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80108E78u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80101724;
}

loc_8010171C:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 280), static_cast<uint8_t>(r0));
}

loc_80101724:
{
    r0 = MemoryInline::FlatRead32((r30 + 180));
    MemoryInline::FlatWrite32((r31 + 408), r0);
    r0 = MemoryInline::FlatRead32((r30 + 184));
    MemoryInline::FlatWrite32((r31 + 412), r0);
    r0 = MemoryInline::FlatRead32((r30 + 188));
    MemoryInline::FlatWrite32((r31 + 416), r0);
    r0 = MemoryInline::FlatRead32((r30 + 192));
    MemoryInline::FlatWrite32((r31 + 420), r0);
    r0 = MemoryInline::FlatRead32((r30 + 196));
    MemoryInline::FlatWrite32((r31 + 424), r0);
    r4 = MemoryInline::FlatRead32((r30 + 200));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80101754:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80101768;
    }
}

loc_80101758:
{
    r3 = (r31 + 428);
    r5 = 51;
    ctx->lr = 0x80101764u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80108E78u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80101770;
}

loc_80101768:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 428), static_cast<uint8_t>(r0));
}

loc_80101770:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 24), 0, 216u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r30 + 24));
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 252), 0, 264u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r31 + 252), r0);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r30 + 44));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r31 + 272), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r30 + 48));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r31 + 276), f0.d);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 156u, (r30 + 180));
    MemoryInline::WriteResolved32(guest_range_1, 156u, (r31 + 408), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 160u, (r30 + 184));
    MemoryInline::WriteResolved32(guest_range_1, 160u, (r31 + 412), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 164u, (r30 + 188));
    MemoryInline::WriteResolved32(guest_range_1, 164u, (r31 + 416), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 168u, (r30 + 192));
    MemoryInline::WriteResolved32(guest_range_1, 168u, (r31 + 420), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 172u, (r30 + 196));
    MemoryInline::WriteResolved32(guest_range_1, 172u, (r31 + 424), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 180u, (r30 + 204));
    MemoryInline::WriteResolved32(guest_range_1, 228u, (r31 + 480), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 184u, (r30 + 208));
    MemoryInline::WriteResolved32(guest_range_1, 232u, (r31 + 484), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 188u, (r30 + 212));
    MemoryInline::WriteResolved32(guest_range_1, 236u, (r31 + 488), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 192u, (r30 + 216));
    MemoryInline::WriteResolved32(guest_range_1, 240u, (r31 + 492), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 196u, (r30 + 220));
    MemoryInline::WriteResolved32(guest_range_1, 244u, (r31 + 496), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 200u, (r30 + 224));
    MemoryInline::WriteResolved32(guest_range_1, 248u, (r31 + 500), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 204u, (r30 + 228));
    MemoryInline::WriteResolved32(guest_range_1, 252u, (r31 + 504), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 208u, (r30 + 232));
    MemoryInline::WriteResolved32(guest_range_1, 256u, (r31 + 508), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 212u, (r30 + 236));
    MemoryInline::WriteResolved32(guest_range_1, 260u, (r31 + 512), r0);
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000005B gpr_write=0xC000007B gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801015D4 func_801015D4 preserves=true fpr_mask=0x00000000
