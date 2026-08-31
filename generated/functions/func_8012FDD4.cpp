#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012FDD4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

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

    goto loc_8012FDD4;

loc_8012FDD4:
{
    r6 = MemoryInline::FlatRead32(r3);
    r7 = 0;
    goto loc_8012FDE8;
}

loc_8012FDE0:
{
    r6 = MemoryInline::FlatRead32(r6);
    r7 = (r7 + 1);
}

loc_8012FDE8:
{
}

loc_8012FDEC:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8012FDFC;
    }
}

loc_8012FDF0:
{
    r0 = MemoryInline::FlatRead32((r6 + 12));
}

loc_8012FDF8:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_8012FDE0;
    }
}

loc_8012FDFC:
{
    r8 = r4;
    r0 = 0;
    goto loc_8012FE28;
}

loc_8012FE08:
{
    r9 = MemoryInline::FlatRead32((r6 + 12));
    r5 = (r9 - r8);
    MemoryInline::FlatWrite32((r6 + 12), r5);
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(0))) {
        goto loc_8012FE20;
    }
}

loc_8012FE18:
{
    MemoryInline::FlatWrite32((r6 + 12), r0);
    r7 = (r7 + 1);
}

loc_8012FE20:
{
    r8 = (r8 - r9);
    r6 = MemoryInline::FlatRead32(r6);
}

loc_8012FE28:
{
}

loc_8012FE2C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8012FE38;
    }
}

loc_8012FE30:
{
}

loc_8012FE34:
{
    if ((static_cast<int32_t>(r8) > static_cast<int32_t>(0))) {
        goto loc_8012FE08;
    }
}

loc_8012FE38:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8012FE40:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8012FE58;
    }
}

loc_8012FE44:
{
    r0 = (r0 - r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    MemoryInline::FlatWrite32((r3 + 8), r0);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8012FE58;
    }
}

loc_8012FE50:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 8), r0);
}

loc_8012FE58:
{
    r3 = r7;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000003F9 gpr_write=0x000003E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8012FDD4 func_8012FDD4 preserves=true fpr_mask=0x00000000
