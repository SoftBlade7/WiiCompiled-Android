#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80668E80(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80668E80;

loc_80668E80:
{
    r3 = 0x80380000u;
    r3 = MemoryInline::FlatRead32((r3 + 24576));
    r0 = MemoryInline::FlatRead32((r3 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80668E90:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80668EC8;
    }
}

loc_80668E94:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80668E98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80668ED0;
    }
}

loc_80668E9C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80668EA0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80668ED8;
    }
}

loc_80668EA4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80668EA8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80668EE0;
    }
}

loc_80668EAC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_80668EB0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80668EE8;
    }
}

loc_80668EB4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_80668EB8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80668EF0;
    }
}

loc_80668EBC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_80668EC0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80668EF8;
    }
}

loc_80668EC4:
{
    goto loc_80668F00;
}

loc_80668EC8:
{
    r5 = 1;
    goto loc_80668F04;
}

loc_80668ED0:
{
    r5 = 2;
    goto loc_80668F04;
}

loc_80668ED8:
{
    r5 = 3;
    goto loc_80668F04;
}

loc_80668EE0:
{
    r5 = 4;
    goto loc_80668F04;
}

loc_80668EE8:
{
    r5 = 5;
    goto loc_80668F04;
}

loc_80668EF0:
{
    r5 = 6;
    goto loc_80668F04;
}

loc_80668EF8:
{
    r5 = 7;
    goto loc_80668F04;
}

loc_80668F00:
{
    r5 = 1;
}

loc_80668F04:
{
    r3 = 0x809C0000u;
    r6 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r3 + 8464));
    r3 = MemoryInline::FlatRead32((r6 + 8512));
    r6 = 1;
    r4 = (r4 + 92);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x806773C8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFF87 gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80668E80 func_80668E80 preserves=true fpr_mask=0x00000000
