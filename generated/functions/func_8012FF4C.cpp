#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012FF4C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8012FF4C;

loc_8012FF4C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8012FF50:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_8012FF54:
{
    r0 = MemoryInline::FlatRead8((r4 + 22));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8012FF5C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_8012FF60:
{
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8012FF68:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8012FF70;
    }
}

loc_8012FF6C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_8012FF70:
{
    r6 = MemoryInline::FlatRead32(r4);
}

loc_8012FF78:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8012FF90;
    }
}

loc_8012FF7C:
{
    r5 = MemoryInline::FlatRead32((r6 + 12));
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r5 + r0);
    MemoryInline::FlatWrite32((r6 + 12), r0);
    goto loc_8012FFA0;
}

loc_8012FF90:
{
    r5 = MemoryInline::FlatRead32((r4 + 12));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 - r5);
    MemoryInline::FlatWrite32((r3 + 8), r0);
}

loc_8012FFA0:
{
    r0 = MemoryInline::FlatRead32(r3);
}

loc_8012FFA8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_8012FFDC;
    }
}

loc_8012FFAC:
{
    r5 = MemoryInline::FlatRead32(r4);
}

loc_8012FFB4:
{
    MemoryInline::FlatWrite32(r3, r5);
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8012FFC4;
    }
}

loc_8012FFBC:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r5 + 4), r0);
}

loc_8012FFC4:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
}

loc_8012FFCC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80130054;
    }
}

loc_8012FFD0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 4), r0);
    goto loc_80130054;
}

loc_8012FFDC:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_8012FFE4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_80130004;
    }
}

loc_8012FFE8:
{
    r5 = MemoryInline::FlatRead32((r4 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8012FFF0:
{
    MemoryInline::FlatWrite32((r3 + 4), r5);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80130054;
    }
}

loc_8012FFF8:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r5, r0);
    goto loc_80130054;
}

loc_80130004:
{
    r3 = MemoryInline::FlatRead32(r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8013000C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80130010:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
}

loc_80130018:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_8013001C:
{
    r0 = MemoryInline::FlatRead32((r4 + 4));
    MemoryInline::FlatWrite32((r3 + 4), r0);
}

loc_8013002C:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80130034:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80130038:
{
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r4));
}

loc_80130040:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_80130044:
{
    r0 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32(r3, r0);
}

loc_80130054:
{
    r3 = 0;
    r0 = 0x80000000u;
    MemoryInline::FlatWrite32((r4 + 4), r3);
    MemoryInline::FlatWrite32(r4, r3);
    MemoryInline::FlatWrite32((r4 + 12), r0);
    MemoryInline::FlatWrite8((r4 + 22), static_cast<uint8_t>(r3));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000069 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8012FF4C func_8012FF4C preserves=true fpr_mask=0x00000000
