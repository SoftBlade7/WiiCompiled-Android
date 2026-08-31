#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8000EF7C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8000EF7C;

loc_8000EF7C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f1.d);
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r3 & 2146435072);
    r0 = (r4 + -2146435072);
}

loc_8000EF94:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8000EFA4;
    }
}

loc_8000EF98:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8000EF9C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000EFC8;
    }
}

loc_8000EFA0:
{
    goto loc_8000EFEC;
}

loc_8000EFA4:
{
    r0 = (r3 & 1048575);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8000EFA8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000EFB8;
    }
}

loc_8000EFAC:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8000EFB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000EFC0;
    }
}

loc_8000EFB8:
{
    r3 = 1;
    goto loc_8000EFF0;
}

loc_8000EFC0:
{
    r3 = 2;
    goto loc_8000EFF0;
}

loc_8000EFC8:
{
    r0 = (r3 & 1048575);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8000EFCC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000EFDC;
    }
}

loc_8000EFD0:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8000EFD8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000EFE4;
    }
}

loc_8000EFDC:
{
    r3 = 5;
    goto loc_8000EFF0;
}

loc_8000EFE4:
{
    r3 = 3;
    goto loc_8000EFF0;
}

loc_8000EFEC:
{
    r3 = 4;
}

loc_8000EFF0:
{
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x00000002 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8000EF7C func_8000EF7C preserves=true fpr_mask=0x00000000
