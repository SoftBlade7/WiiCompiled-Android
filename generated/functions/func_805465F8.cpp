#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805465F8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805465F8;

loc_805465F8:
{
    r8 = 65536;
    r0 = (r8 + -29504);
    r0 = (r7 * r0);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 22152));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(11));
    r3 = (r3_rot_0 & 15);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80546610:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80546648;
    }
}

loc_80546614:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(13));
}

loc_80546618:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80546648;
    }
}

loc_8054661C:
{
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r7 = (r7_rot_1 & 31);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_80546620:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80546648;
    }
}

loc_80546624:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(32));
}

loc_80546628:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80546648;
    }
}

loc_8054662C:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(7));
    r0 = (r0_rot_1 & 127);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(100));
}

loc_80546634:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80546648;
    }
}

loc_80546638:
{
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r7));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

loc_80546648:
{
    r0 = 7;
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r0 = 1;
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x00000189 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805465F8 func_805465F8 preserves=true fpr_mask=0x00000000
