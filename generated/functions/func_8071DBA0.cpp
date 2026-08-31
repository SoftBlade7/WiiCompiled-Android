#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8071DBA0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_8071DBF4_loc_0 = 0;
    uint32_t addr_lfsx_8071DBFC_loc_0 = 0;
    uint32_t addr_lfsx_8071DC4C_loc_0 = 0;
    uint32_t addr_lfsx_8071DC50_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r9_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8071DBA0;

loc_8071DBA0:
{
}

loc_8071DBA4:
{
    r0 = r4;
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(0))) {
        goto loc_8071DBB4;
    }
}

loc_8071DBAC:
{
    r0 = (r4 + 128);
    goto loc_8071DBC0;
}

loc_8071DBB4:
{
}

loc_8071DBB8:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(128))) {
        goto loc_8071DBC0;
    }
}

loc_8071DBBC:
{
    r0 = (r4 + -128);
}

loc_8071DBC0:
{
    r8 = (r4 - r6);
    r10 = MemoryInline::FlatRead32((r3 + 36));
    r9_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r9 = (r9_rot_0 & -4);
    r7 = (r0 * 12);
    r5 = (r9 + r10);
    if ((static_cast<int32_t>(r8) >= static_cast<int32_t>(0))) {
        goto loc_8071DBE0;
    }
}

loc_8071DBD8:
{
    r8 = (r8 + 128);
    goto loc_8071DBEC;
}

loc_8071DBE0:
{
}

loc_8071DBE4:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(128))) {
        goto loc_8071DBEC;
    }
}

loc_8071DBE8:
{
    r8 = (r8 + -128);
}

loc_8071DBEC:
{
    r3 = (r8 * 12);
    r0 = (r9 + r10);
    addr_lfsx_8071DBF4_loc_0 = (r7 + r5);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_8071DBF4_loc_0);
    r8 = (r4 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(0));
}

loc_8071DBFC:
{
    addr_lfsx_8071DBFC_loc_0 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8071DBFC_loc_0);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8071DC10;
    }
}

loc_8071DC08:
{
    r8 = (r8 + 128);
    goto loc_8071DC1C;
}

loc_8071DC10:
{
}

loc_8071DC14:
{
    if ((static_cast<int32_t>(r8) < static_cast<int32_t>(128))) {
        goto loc_8071DC1C;
    }
}

loc_8071DC18:
{
    r8 = (r8 + -128);
}

loc_8071DC1C:
{
    r0 = (r4 + -1);
    r4 = (r9 + r10);
    r3 = (r0 - r6);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
    r5 = (r8 * 12);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8071DC38;
    }
}

loc_8071DC30:
{
    r3 = (r3 + 128);
    goto loc_8071DC44;
}

loc_8071DC38:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(128));
}

loc_8071DC3C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8071DC44;
    }
}

loc_8071DC40:
{
    r3 = (r3 + -128);
}

loc_8071DC44:
{
    r3 = (r3 * 12);
    r0 = (r9 + r10);
    addr_lfsx_8071DC4C_loc_0 = (r5 + r4);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_8071DC4C_loc_0);
    addr_lfsx_8071DC50_loc_0 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8071DC50_loc_0);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000007F9 gpr_write=0x000007B9 gpr_return=0x00000018 fpr_read=0x00000006 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8071DBA0 func_8071DBA0 preserves=true fpr_mask=0x00000000
