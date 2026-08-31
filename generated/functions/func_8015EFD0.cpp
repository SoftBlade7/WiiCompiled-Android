#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8015EFD0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8015EFD0;

loc_8015EFD0:
{
    r0 = (r3 + -131072);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1024));
}

loc_8015EFD8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015EFE8;
    }
}

loc_8015EFDC:
{
    MemoryInline::FlatWrite32((r13 + -25896), r3);
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_8015EFE8:
{
    r4 = (r3 & 16777215);
    r0 = (r4 + -393216);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(10240));
}

loc_8015EFF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8015F01C;
    }
}

loc_8015EFF8:
{
    r0 = (r4 + -131072);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(14848));
}

loc_8015F000:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8015F01C;
    }
}

loc_8015F004:
{
    r3 = (r4 + -327680);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(12288));
}

loc_8015F00C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8015F01C;
    }
}

loc_8015F010:
{
    r0 = (r4 + -720896);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(23041));
}

loc_8015F018:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015F024;
    }
}

loc_8015F01C:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_8015F024:
{
}

loc_8015F028:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(8192))) {
        goto loc_8015F058;
    }
}

loc_8015F02C:
{
    r3 = MemoryInline::FlatRead32((r13 + -25872));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(37));
}

loc_8015F038:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8015F050;
    }
}

loc_8015F03C:
{
    r3 = 0x80160000u;
    r0 = MemoryInline::FlatRead32((r13 + -25868));
    r3 = (r3 + 3856);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
}

loc_8015F04C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015F058;
    }
}

loc_8015F050:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_8015F058:
{
    r3 = MemoryInline::FlatRead32((r13 + -25992));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r13 + -25992), r0);
    r0 = MemoryInline::FlatRead32((r13 + -25992));
}

loc_8015F06C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_8015F094;
    }
}

loc_8015F070:
{
    r0 = MemoryInline::FlatRead32((r13 + -25896));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_8015F078:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015F088;
    }
}

loc_8015F07C:
{
    MemoryInline::FlatWrite32((r13 + -25896), r4);
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_8015F088:
{
    MemoryInline::FlatWrite32((r13 + -25896), r4);
    r3 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_8015F094:
{
    r0 = (r4 + -196608);
    MemoryInline::FlatWrite32((r13 + -25896), r4);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(4352));
}

loc_8015F0A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8015F0B4;
    }
}

loc_8015F0A4:
{
    r3 = MemoryInline::FlatRead32((r13 + -25872));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
}

loc_8015F0B0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015F0BC;
    }
}

loc_8015F0B4:
{
    r3 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_8015F0BC:
{
    r3 = 3;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00002019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8015EFD0 func_8015EFD0 preserves=true fpr_mask=0x00000000
