#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800D41F4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800D41F4;

loc_800D41F4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    // inline leaf 0x800CCC54 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26968));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x800CCC54
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800D4208:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D4214;
    }
}

loc_800D420C:
{
    r3 = 0;
    goto loc_800D4248;
}

loc_800D4214:
{
    r0 = MemoryInline::FlatRead32((r13 + -26868));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800D421C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D423C;
    }
}

loc_800D4220:
{
    // inline leaf 0x800D26CC (7 guest instruction(s))
}

loc_inl1_0x800D26CC:
{
    r3 = MemoryInline::FlatRead32((r13 + -26896));
}

loc_inl1_0x800D26D4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x800D26E0;
    }
}

loc_inl1_0x800D26D8:
{
    r3 = MemoryInline::FlatRead32((r3 + 36));
    goto loc_inl1_cont_800D26CC;
}

loc_inl1_0x800D26E0:
{
    r3 = 0;
}

loc_inl1_cont_800D26CC:
{
    // end of inlined leaf 0x800D26CC
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(5));
}

loc_800D4228:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800D423C;
    }
}

loc_800D422C:
{
    r3 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = MemoryInline::FlatRead8((r3 + 1826));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800D4238:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D4244;
    }
}

loc_800D423C:
{
    r3 = 0;
    goto loc_800D4248;
}

loc_800D4244:
{
    r3 = 1;
}

loc_800D4248:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000200B gpr_write=0x0000000B gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800D41F4 func_800D41F4 preserves=true fpr_mask=0x00000000
