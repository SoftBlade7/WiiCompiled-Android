#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80525E60(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80525E60;

loc_80525E60:
{
    r4 = 65536;
    r8 = 0;
    r5 = (r4 + -27664);
    r6 = 0x809C0000u;
    r0 = (r8 * r5);
    r4 = MemoryInline::FlatRead32((r6 + -10424));
    r7 = (r4 + 56);
    r6 = (r7 + r0);
    r4 = (r6 + 65536);
    r0 = MemoryInline::FlatRead8((r4 + -27667));
}

loc_80525E8C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80525EB8;
    }
}

loc_80525E90:
{
    r4 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r6 + 22));
}

loc_80525E9C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80525EB8;
    }
}

loc_80525EA0:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r6 + 26));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_80525EAC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80525EB8;
    }
}

loc_80525EB0:
{
    r8 = 1;
    goto loc_80525F80;
}

loc_80525EB8:
{
    r0 = 1;
    r0 = (r0 * r5);
    r6 = (r7 + r0);
    r4 = (r6 + 65536);
    r0 = MemoryInline::FlatRead8((r4 + -27667));
}

loc_80525ED0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80525EFC;
    }
}

loc_80525ED4:
{
    r4 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r6 + 22));
}

loc_80525EE0:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80525EFC;
    }
}

loc_80525EE4:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r6 + 26));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_80525EF0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80525EFC;
    }
}

loc_80525EF4:
{
    r8 = 1;
    goto loc_80525F80;
}

loc_80525EFC:
{
    r0 = 2;
    r0 = (r0 * r5);
    r6 = (r7 + r0);
    r4 = (r6 + 65536);
    r0 = MemoryInline::FlatRead8((r4 + -27667));
}

loc_80525F14:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80525F40;
    }
}

loc_80525F18:
{
    r4 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r6 + 22));
}

loc_80525F24:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80525F40;
    }
}

loc_80525F28:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r6 + 26));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_80525F34:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80525F40;
    }
}

loc_80525F38:
{
    r8 = 1;
    goto loc_80525F80;
}

loc_80525F40:
{
    r0 = 3;
    r0 = (r0 * r5);
    r6 = (r7 + r0);
    r4 = (r6 + 65536);
    r0 = MemoryInline::FlatRead8((r4 + -27667));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80525F58:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80525F80;
    }
}

loc_80525F5C:
{
    r4 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r6 + 22));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_80525F68:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80525F80;
    }
}

loc_80525F6C:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r6 + 26));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_80525F78:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80525F80;
    }
}

loc_80525F7C:
{
    r8 = 1;
}

loc_80525F80:
{
    r3 = r8;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80525E60 func_80525E60 preserves=true fpr_mask=0x00000000
