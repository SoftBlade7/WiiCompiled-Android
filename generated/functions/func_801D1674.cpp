#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801D1674(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801D1674;

loc_801D1674:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801D1680:
{
    r5 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801D1694;
    }
}

loc_801D168C:
{
    r3 = 0;
    goto loc_801D17DC;
}

loc_801D1694:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-62));
}

loc_801D1698:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D1740;
    }
}

loc_801D169C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801D16F8;
    }
}

loc_801D16A0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-111));
}

loc_801D16A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D174C;
    }
}

loc_801D16A8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801D16D8;
    }
}

loc_801D16AC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-121));
}

loc_801D16B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D1758;
    }
}

loc_801D16B4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801D16CC;
    }
}

loc_801D16B8:
{
    r4 = 0x80000000u;
    r0 = (r4 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_801D16C4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801D17C0;
    }
}

loc_801D16C8:
{
    goto loc_801D17B4;
}

loc_801D16CC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-112));
}

loc_801D16D0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801D1780;
    }
}

loc_801D16D4:
{
    goto loc_801D17C0;
}

loc_801D16D8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-76));
}

loc_801D16DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D1780;
    }
}

loc_801D16E0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801D17C0;
    }
}

loc_801D16E4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-99));
}

loc_801D16E8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801D17C0;
    }
}

loc_801D16EC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-102));
}

loc_801D16F0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801D17A8;
    }
}

loc_801D16F4:
{
    goto loc_801D17C0;
}

loc_801D16F8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-39));
}

loc_801D16FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D1780;
    }
}

loc_801D1700:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801D171C;
    }
}

loc_801D1704:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-45));
}

loc_801D1708:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D1728;
    }
}

loc_801D170C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801D17C0;
    }
}

loc_801D1710:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-48));
}

loc_801D1714:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D1780;
    }
}

loc_801D1718:
{
    goto loc_801D17C0;
}

loc_801D171C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-28));
}

loc_801D1720:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801D1734;
    }
}

loc_801D1724:
{
    goto loc_801D17C0;
}

loc_801D1728:
{
    r3 = -65536;
    r3 = (r3 + 15336);
    goto loc_801D17DC;
}

loc_801D1734:
{
    r3 = -65536;
    r3 = (r3 + 15236);
    goto loc_801D17DC;
}

loc_801D1740:
{
    r3 = -65536;
    r3 = (r3 + 15136);
    goto loc_801D17DC;
}

loc_801D174C:
{
    r3 = -65536;
    r3 = (r3 + 12836);
    goto loc_801D17DC;
}

loc_801D1758:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(20));
}

loc_801D175C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801D1774;
    }
}

loc_801D1760:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(30));
}

loc_801D1764:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801D1774;
    }
}

loc_801D1768:
{
    r3 = -65536;
    r3 = (r3 + 14136);
    goto loc_801D17DC;
}

loc_801D1774:
{
    r3 = -65536;
    r3 = (r3 + 14536);
    goto loc_801D17DC;
}

loc_801D1780:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(20));
}

loc_801D1784:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801D179C;
    }
}

loc_801D1788:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(30));
}

loc_801D178C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801D179C;
    }
}

loc_801D1790:
{
    r3 = -65536;
    r3 = (r3 + 14136);
    goto loc_801D17DC;
}

loc_801D179C:
{
    r3 = -65536;
    r3 = (r3 + 14236);
    goto loc_801D17DC;
}

loc_801D17A8:
{
    r3 = -65536;
    r3 = (r3 + 13536);
    goto loc_801D17DC;
}

loc_801D17B4:
{
    r3 = -65536;
    r3 = (r3 + 15436);
    goto loc_801D17DC;
}

loc_801D17C0:
{
    r3 = 0x802A0000u;
    r4 = r5;
    r3 = (r3 + 4312);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x801D17D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A25D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = -65536;
    r3 = (r3 + 15436);
}

loc_801D17DC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801D1674 func_801D1674 preserves=true fpr_mask=0x00000000
