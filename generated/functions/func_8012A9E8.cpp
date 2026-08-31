#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012A9E8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8012A9E8;

loc_8012A9E8:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = r3;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 88u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 56u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.second);
            f0.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 60u, (r3 + 60));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 56u, (r3 + 56));
        }
    }
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8012AA08:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8012AA14;
    }
}

loc_8012AA0C:
{
    r3 = 0;
    goto loc_8012ABC8;
}

loc_8012AA14:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 64u, (r3 + 64));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -27212));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8012AA20:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8012AA34;
    }
}

loc_8012AA24:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -27208));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8012AA2C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8012AA3C;
    }
}

loc_8012AA34:
{
    r3 = 0;
    goto loc_8012ABC8;
}

loc_8012AA3C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 68u, (r3 + 68));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8012AA44:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8012AA50;
    }
}

loc_8012AA48:
{
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8012AA4C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8012AA58;
    }
}

loc_8012AA50:
{
    r3 = 0;
    goto loc_8012ABC8;
}

loc_8012AA58:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 80u, (r3 + 80));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8012AA60:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8012AA6C;
    }
}

loc_8012AA64:
{
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8012AA68:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8012AA74;
    }
}

loc_8012AA6C:
{
    r3 = 0;
    goto loc_8012ABC8;
}

loc_8012AA74:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 84u, (r3 + 84));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8012AA7C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8012AA88;
    }
}

loc_8012AA80:
{
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8012AA84:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8012AA90;
    }
}

loc_8012AA88:
{
    r3 = 0;
    goto loc_8012ABC8;
}

loc_8012AA90:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8012AA98:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8012AAA4;
    }
}

loc_8012AA9C:
{
    r3 = 0;
    goto loc_8012ABC8;
}

loc_8012AAA4:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8012AAAC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8012AAB8;
    }
}

loc_8012AAB0:
{
    r3 = 0;
    goto loc_8012ABC8;
}

loc_8012AAB8:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8012AAC0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8012AACC;
    }
}

loc_8012AAC4:
{
    r3 = 0;
    goto loc_8012ABC8;
}

loc_8012AACC:
{
    r0 = MemoryInline::FlatRead32((r31 + 20));
    r3 = r4;
    r4 = 0;
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r5 = (r5_rot_1 & -4);
    ctx->lr = 0x8012AAE0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r31 + 20));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r5 = (r5_rot_2 & -4);
    ctx->lr = 0x8012AAF4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r31 + 20));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r5 = (r5_rot_3 & -4);
    ctx->lr = 0x8012AB08u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -27216));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 60));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
}

loc_8012AB1C:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 12), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r31 + 16), r3);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8012AB2C;
    }
}

loc_8012AB24:
{
    r0 = 1;
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r31 + 16), r0);
}

loc_8012AB2C:
{
    f1.d = MemoryInline::FlatReadFloat32((r2 + -27204));
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 64));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -27208));
    f3.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 68));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -27200));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r31 + 12), r0);
    f1.d = PPC_Fctiwz(f3.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8012AB58:
{
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f1.d);
    r0 = MemoryInline::FlatRead32((r1 + 12));
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r31 + 24), r0);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8012AB6C;
    }
}

loc_8012AB68:
{
    f2.d = f0.d;
}

loc_8012AB6C:
{
    f3.d = MemoryInline::FlatReadFloat32((r2 + -27204));
    r0 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 80));
    r3 = 1;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 84));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f1.d = PpcFmulsInline(f3.d, f1.d);
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r31 + 28), r0);
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f2.d = PPC_Fctiwz(f2.d);
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r31 + 32), r0);
    f1.d = PPC_Fctiwz(f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r31 + 36), r0);
    fctiwzword0 = PPC_FprLowWordInline(f2.d);
    fctiwzword1 = PPC_FprLowWordInline(f1.d);
    r5 = fctiwzword0;
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    r4 = fctiwzword1;
    r0 = fctiwzword2;
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r31 + 40), r5);
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r31 + 44), r4);
    }
    MemoryInline::WriteResolved32(guest_range_1, 36u, (r31 + 48), r0);
}

loc_8012ABC8:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x800000FF gpr_write=0x800000FB gpr_return=0x00000018 fpr_read=0x0000001F fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8012A9E8 func_8012A9E8 preserves=true fpr_mask=0x00000000
