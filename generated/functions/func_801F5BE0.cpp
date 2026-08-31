#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F5BE0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801F5BE0;

loc_801F5BE0:
{
    r6 = MemoryInline::FlatRead32((r4 + 12));
    r5 = (r5 + -1);
    r0 = MemoryInline::FlatRead8((r3 + 32));
    r3 = MemoryInline::FlatRead32((r4 + 8));
}

loc_801F5BF4:
{
    r0 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r5 = (r3 + r0);
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_801F5C1C;
    }
}

loc_801F5C00:
{
}

loc_801F5C04:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(r6))) {
        goto loc_801F5C0C;
    }
}

loc_801F5C08:
{
    r3 = 0;
}

loc_801F5C0C:
{
    r0 = MemoryInline::FlatRead32((r4 + 16));
}

loc_801F5C14:
{
    if ((static_cast<uint32_t>(r5) > static_cast<uint32_t>(r0))) {
        goto loc_801F5C1C;
    }
}

loc_801F5C18:
{
    r5 = 0;
}

loc_801F5C1C:
{
    r0 = MemoryInline::FlatRead16(r4);
}

loc_801F5C24:
{
    r0 = (r0 | 2);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801F5C34;
    }
}

loc_801F5C30:
{
    MemoryInline::FlatWrite32((r4 + 12), r3);
}

loc_801F5C34:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_801F5C38:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F5C40;
    }
}

loc_801F5C3C:
{
    MemoryInline::FlatWrite32((r4 + 16), r5);
}

loc_801F5C40:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000069 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801F5BE0 func_801F5BE0 preserves=true fpr_mask=0x00000000
