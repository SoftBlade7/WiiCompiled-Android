#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806FB640(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    uint32_t cr = ctx->cr;

    goto loc_806FB640;

loc_806FB640:
{
    r4 = 0x808A0000u;
    f4.d = MemoryInline::FlatReadFloat32((r3 + 36));
    r4 = (r4 + 4344);
    f5.d = MemoryInline::FlatReadFloat32((r3 + 40));
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 104), 0, 80u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r4 + 128));
    f6.d = MemoryInline::FlatReadFloat32((r3 + 44));
    SetCRFloatResident(cr, 0, f0.d, f4.d);
}

loc_806FB65C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806FB674;
    }
}

loc_806FB660:
{
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r4 + 104));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r4 + 108));
        }
    }
    f6.d = f1.d;
    MemoryInline::FlatWriteFloat32((r3 + 40), f0.d);
    goto loc_806FB6F0;
}

loc_806FB674:
{
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f1.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r4 + 124));
    f3.d = std::fabs(f3.d);
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_806FB684:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806FB694;
    }
}

loc_806FB688:
{
    MemoryInline::FlatWriteFloat32((r3 + 40), f1.d);
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r4 + 104));
    goto loc_806FB6F0;
}

loc_806FB694:
{
    f3.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f1.d));
    f3.d = std::fabs(f3.d);
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_806FB6A0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_806FB6E0;
    }
}

loc_806FB6A4:
{
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_806FB6A8:
{
    MemoryInline::FlatWriteFloat32((r3 + 40), f1.d);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806FB6B8;
    }
}

loc_806FB6B0:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 68u, (r4 + 172));
    goto loc_806FB6D0;
}

loc_806FB6B8:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 64));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_806FB6C0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_806FB6CC;
    }
}

loc_806FB6C4:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 72u, (r4 + 176));
    goto loc_806FB6D0;
}

loc_806FB6CC:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 76u, (r4 + 180));
}

loc_806FB6D0:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f4.d));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f4.d));
    goto loc_806FB6F0;
}

loc_806FB6E0:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r4 + 104));
    SetCRFloatResident(cr, 0, f0.d, f6.d);
}

loc_806FB6E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FB6F0;
    }
}

loc_806FB6EC:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f4.d));
}

loc_806FB6F0:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r4 + 108));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806FB6FC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_806FB708;
    }
}

loc_806FB700:
{
    f1.d = f0.d;
    goto loc_806FB714;
}

loc_806FB708:
{
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_806FB70C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806FB714;
    }
}

loc_806FB710:
{
    f1.d = f2.d;
}

loc_806FB714:
{
    MemoryInline::FlatWriteFloat32((r3 + 44), f6.d);
    MemoryInline::FlatWriteFloat32((r3 + 36), f1.d);
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000018 gpr_write=0x00000010 gpr_return=0x00000010 fpr_read=0x0000007F fpr_write=0x0000007F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806FB640 func_806FB640 preserves=true fpr_mask=0x00000000
