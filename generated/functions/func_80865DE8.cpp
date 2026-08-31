#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80865DE8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r9_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80865DE8;

loc_80865DE8:
{
    r7 = 0x808B0000u;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & -2);
    r7 = (r7 + -232);
    r9_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r9 = (r9_rot_0 & -2);
    r6 = (r7 + r0);
    r8 = MemoryInline::FlatRead8((r6 + 1));
    r6 = (r7 + r9);
    r6 = MemoryInline::FlatRead8((r6 + 1));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(0));
}

loc_80865E0C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80865EFC;
    }
}

loc_80865E10:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_80865E14:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80865EFC;
    }
}

loc_80865E18:
{
    r0 = (r4 + -8);
}

loc_80865E20:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(3))) {
        goto loc_80865E50;
    }
}

loc_80865E24:
{
}

loc_80865E28:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(6))) {
        goto loc_80865EB0;
    }
}

loc_80865E2C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(11));
}

loc_80865E30:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80865E48;
    }
}

loc_80865E34:
{
    r0 = MemoryInline::FlatRead32((r3 + 1744));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(90));
}

loc_80865E3C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80865E48;
    }
}

loc_80865E40:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

loc_80865E48:
{
    r3 = 3;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

loc_80865E50:
{
}

loc_80865E54:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(6))) {
        goto loc_80865E94;
    }
}

loc_80865E58:
{
    r0 = (r5 + -9);
}

loc_80865E60:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80865E78;
    }
}

loc_80865E64:
{
    r0 = MemoryInline::FlatRead32((r3 + 1744));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(60));
}

loc_80865E6C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80865EB0;
    }
}

loc_80865E70:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

loc_80865E78:
{
}

loc_80865E7C:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(8))) {
        goto loc_80865EB0;
    }
}

loc_80865E80:
{
    r0 = MemoryInline::FlatRead32((r3 + 1744));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(90));
}

loc_80865E88:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80865EB0;
    }
}

loc_80865E8C:
{
    r3 = 3;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

loc_80865E94:
{
    r0 = (r4 + -26);
}

loc_80865E9C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80865EB0;
    }
}

loc_80865EA0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(6));
}

loc_80865EA4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80865EB0;
    }
}

loc_80865EA8:
{
    r3 = 3;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

loc_80865EB0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r8), static_cast<uint32_t>(r6));
}

loc_80865EB4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80865EC0;
    }
}

loc_80865EB8:
{
    r3 = 3;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

loc_80865EC0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80865ECC;
    }
}

loc_80865EC4:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

loc_80865ECC:
{
    r3 = 0x808B0000u;
    r3 = (r3 + -232);
    r3_addr_1 = (r3 + r9);
    r0 = MemoryInline::FlatRead8(r3_addr_1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80865EDC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80865EEC;
    }
}

loc_80865EE0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80865EE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80865EF4;
    }
}

loc_80865EE8:
{
    goto loc_80865EFC;
}

loc_80865EEC:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

loc_80865EF4:
{
    r3 = 3;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

loc_80865EFC:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000379 gpr_write=0x000003C9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80865DE8 func_80865DE8 preserves=true fpr_mask=0x00000000
