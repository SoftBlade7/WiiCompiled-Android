#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8070C758(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8070C758;

loc_8070C758:
{
    r6 = MemoryInline::FlatRead32((r3 + 128));
    r4 = 0x808A0000u;
    r4 = (r4 + 5856);
    r5 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8070C76C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070C790;
    }
}

loc_8070C770:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070C77C;
    }
}

loc_8070C774:
{
    r0 = MemoryInline::FlatRead32((r6 + 144));
    goto loc_8070C780;
}

loc_8070C77C:
{
    r0 = -1;
}

loc_8070C780:
{
}

loc_8070C784:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(284))) {
        goto loc_8070C790;
    }
}

loc_8070C788:
{
    r5 = (r3 + 128);
    goto loc_8070C810;
}

loc_8070C790:
{
    r6 = MemoryInline::FlatRead32((r3 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8070C798:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070C7BC;
    }
}

loc_8070C79C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070C7A8;
    }
}

loc_8070C7A0:
{
    r0 = MemoryInline::FlatRead32((r6 + 144));
    goto loc_8070C7AC;
}

loc_8070C7A8:
{
    r0 = -1;
}

loc_8070C7AC:
{
}

loc_8070C7B0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(284))) {
        goto loc_8070C7BC;
    }
}

loc_8070C7B4:
{
    r5 = (r3 + 132);
    goto loc_8070C810;
}

loc_8070C7BC:
{
    r6 = MemoryInline::FlatRead32((r3 + 136));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8070C7C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070C7E8;
    }
}

loc_8070C7C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070C7D4;
    }
}

loc_8070C7CC:
{
    r0 = MemoryInline::FlatRead32((r6 + 144));
    goto loc_8070C7D8;
}

loc_8070C7D4:
{
    r0 = -1;
}

loc_8070C7D8:
{
}

loc_8070C7DC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(284))) {
        goto loc_8070C7E8;
    }
}

loc_8070C7E0:
{
    r5 = (r3 + 136);
    goto loc_8070C810;
}

loc_8070C7E8:
{
    r6 = MemoryInline::FlatRead32((r3 + 140));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8070C7F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070C810;
    }
}

loc_8070C7F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070C800;
    }
}

loc_8070C7F8:
{
    r0 = MemoryInline::FlatRead32((r6 + 144));
    goto loc_8070C804;
}

loc_8070C800:
{
    r0 = -1;
}

loc_8070C804:
{
}

loc_8070C808:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(284))) {
        goto loc_8070C810;
    }
}

loc_8070C80C:
{
    r5 = (r3 + 140);
}

loc_8070C810:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8070C814:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_8070C818:
{
    f2.d = MemoryInline::FlatReadFloat32((r4 + 88));
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_8070C820:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8070C830;
    }
}

loc_8070C828:
{
    f2.d = MemoryInline::FlatReadFloat32((r4 + 144));
    goto loc_8070C850;
}

loc_8070C830:
{
    f0.d = MemoryInline::FlatReadFloat32(r4);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8070C838:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8070C844;
    }
}

loc_8070C840:
{
    goto loc_8070C850;
}

loc_8070C844:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 148));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
}

loc_8070C850:
{
    r3 = MemoryInline::FlatRead32(r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070C858:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_8070C85C:
{
    f1.d = f2.d;
    // inline leaf 0x8008F610 (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 176), f1.d);
    // end of inlined leaf 0x8008F610
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8070C758 func_8070C758 preserves=true fpr_mask=0x00000000
