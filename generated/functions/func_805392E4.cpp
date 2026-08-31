#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805392E4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_80539318_loc_0 = 0;
    uint32_t addr_lfsx_8053937C_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805392E4;

loc_805392E4:
{
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r4 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 536));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 68));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805392F8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_80539300:
{
    r5 = MemoryInline::FlatRead8((r3 + 16));
    r0 = MemoryInline::FlatRead16((r3 + 14));
}

loc_8053930C:
{
    if ((static_cast<int32_t>(r5) > static_cast<int32_t>(r0))) {
        goto loc_805393D8;
    }
}

loc_80539310:
{
    r4 = MemoryInline::FlatRead32((r3 + 24));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1020);
    addr_lfsx_80539318_loc_0 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_80539318_loc_0);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80539320:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80539378;
    }
}

loc_80539324:
{
}

loc_80539328:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(32))) {
        goto loc_8053934C;
    }
}

loc_8053932C:
{
    r0 = 1;
    r4 = MemoryInline::FlatRead32((r3 + 8));
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
    r4 = (r4 & r0);
    r0 = (0 - r4);
    r0 = (r0 | r4);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    goto loc_80539350;
}

loc_8053934C:
{
    r0 = 0;
}

loc_80539350:
{
}

loc_80539354:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805393D8;
    }
}

loc_80539358:
{
}

loc_8053935C:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(32))) {
        goto loc_805393D8;
    }
}

loc_80539360:
{
    r0 = 1;
    r4 = MemoryInline::FlatRead32((r3 + 8));
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
    r0 = (r4 | r0);
    MemoryInline::FlatWrite32((r3 + 8), r0);
    goto loc_805393D8;
}

loc_80539378:
{
    r4 = MemoryInline::FlatRead32((r3 + 20));
    addr_lfsx_8053937C_loc_0 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8053937C_loc_0);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80539384:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805393D8;
    }
}

loc_80539388:
{
}

loc_8053938C:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(32))) {
        goto loc_805393B0;
    }
}

loc_80539390:
{
    r0 = 1;
    r4 = MemoryInline::FlatRead32((r3 + 8));
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
    r4 = (r4 & r0);
    r0 = (0 - r4);
    r0 = (r0 | r4);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & 1);
    goto loc_805393B4;
}

loc_805393B0:
{
    r0 = 0;
}

loc_805393B4:
{
}

loc_805393B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805393D8;
    }
}

loc_805393BC:
{
}

loc_805393C0:
{
    if ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(32))) {
        goto loc_805393D8;
    }
}

loc_805393C4:
{
    r0 = 1;
    r4 = MemoryInline::FlatRead32((r3 + 8));
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
    r0 = (r4 & ~r0);
    MemoryInline::FlatWrite32((r3 + 8), r0);
}

loc_805393D8:
{
    r5 = MemoryInline::FlatRead8((r3 + 16));
    r4 = MemoryInline::FlatRead16((r3 + 14));
    r0 = (r5 + 1);
    MemoryInline::FlatWrite8((r3 + 16), static_cast<uint8_t>(r0));
    r5 = (r0 & 255);
    r0 = (r4 + 15);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_805393F4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_return;
    }
}

loc_805393F8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 16), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805392E4 func_805392E4 preserves=true fpr_mask=0x00000000
