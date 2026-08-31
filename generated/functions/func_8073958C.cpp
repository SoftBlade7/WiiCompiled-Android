#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8073958C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8073958C;

loc_8073958C:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r4 = 0;
}

loc_80739598:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807395B0;
    }
}

loc_8073959C:
{
}

loc_807395A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_807395E8;
    }
}

loc_807395A4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_807395A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80739620;
    }
}

loc_807395AC:
{
    goto loc_80739654;
}

loc_807395B0:
{
    r0 = MemoryInline::FlatRead32((r3 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807395B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807395D0;
    }
}

loc_807395BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_807395C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807395D8;
    }
}

loc_807395C4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_807395C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807395E0;
    }
}

loc_807395CC:
{
    goto loc_80739654;
}

loc_807395D0:
{
    r4 = 0;
    goto loc_80739654;
}

loc_807395D8:
{
    r4 = 1;
    goto loc_80739654;
}

loc_807395E0:
{
    r4 = 2;
    goto loc_80739654;
}

loc_807395E8:
{
    r0 = MemoryInline::FlatRead32((r3 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807395F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80739608;
    }
}

loc_807395F4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_807395F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80739610;
    }
}

loc_807395FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80739600:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80739618;
    }
}

loc_80739604:
{
    goto loc_80739654;
}

loc_80739608:
{
    r4 = 3;
    goto loc_80739654;
}

loc_80739610:
{
    r4 = 4;
    goto loc_80739654;
}

loc_80739618:
{
    r4 = 5;
    goto loc_80739654;
}

loc_80739620:
{
    r0 = MemoryInline::FlatRead32((r3 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80739628:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80739640;
    }
}

loc_8073962C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80739630:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80739648;
    }
}

loc_80739634:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80739638:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80739650;
    }
}

loc_8073963C:
{
    goto loc_80739654;
}

loc_80739640:
{
    r4 = 6;
    goto loc_80739654;
}

loc_80739648:
{
    r4 = 7;
    goto loc_80739654;
}

loc_80739650:
{
    r4 = 8;
}

loc_80739654:
{
    r3 = r4;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8073958C func_8073958C preserves=true fpr_mask=0x00000000
