#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801D5E7C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801D5E7C;

loc_801D5E7C:
{
    r0 = (r4 + -2);
    r0 = (r0 & 3);
    r3_addr_0 = (r3 + r0);
    r5 = MemoryInline::FlatRead8(r3_addr_0);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
}

loc_801D5E90:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(13))) {
        goto loc_801D5EB4;
    }
}

loc_801D5E94:
{
    r0 = (r4 + -1);
    r0 = (r0 & 3);
    r3_addr_1 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_1);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(13));
}

loc_801D5EA8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D5EB4;
    }
}

loc_801D5EAC:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_801D5EB4:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
}

loc_801D5EBC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(10))) {
        goto loc_801D5EE0;
    }
}

loc_801D5EC0:
{
    r0 = (r4 + -1);
    r0 = (r0 & 3);
    r3_addr_3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_3);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(10));
}

loc_801D5ED4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D5EE0;
    }
}

loc_801D5ED8:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_801D5EE0:
{
    r0 = (r4 + -4);
    r0 = (r0 & 3);
    r3_addr_5 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_5);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(13));
}

loc_801D5EF4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D5F3C;
    }
}

loc_801D5EF8:
{
    r0 = (r4 + -3);
    r0 = (r0 & 3);
    r3_addr_6 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_6);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(10));
}

loc_801D5F0C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D5F3C;
    }
}

loc_801D5F10:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(13));
}

loc_801D5F18:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D5F3C;
    }
}

loc_801D5F1C:
{
    r0 = (r4 + -1);
    r0 = (r0 & 3);
    r3_addr_7 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_7);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(10));
}

loc_801D5F30:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801D5F3C;
    }
}

loc_801D5F34:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_801D5F3C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000029 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801D5E7C func_801D5E7C preserves=true fpr_mask=0x00000000
