#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80052930(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80052930;

loc_80052930:
{
    r11 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r11 + 24));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8005293C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80052948;
    }
}

loc_80052940:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

loc_80052948:
{
}

loc_8005294C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8005296C;
    }
}

loc_80052950:
{
    r0 = MemoryInline::FlatRead32((r11 + 16));
}

loc_80052958:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80052964;
    }
}

loc_8005295C:
{
    r0 = (r11 + r0);
    goto loc_80052968;
}

loc_80052964:
{
    r0 = 0;
}

loc_80052968:
{
    MemoryInline::FlatWrite32(r4, r0);
}

loc_8005296C:
{
}

loc_80052970:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80052980;
    }
}

loc_80052974:
{
    r4 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead16((r4 + 28));
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r0));
}

loc_80052980:
{
}

loc_80052984:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_80052994;
    }
}

loc_80052988:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead16((r3 + 30));
    MemoryInline::FlatWrite16(r6, static_cast<uint16_t>(r0));
}

loc_80052994:
{
}

loc_80052998:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_800529A4;
    }
}

loc_8005299C:
{
    r0 = MemoryInline::FlatRead32((r11 + 32));
    MemoryInline::FlatWrite32(r7, r0);
}

loc_800529A4:
{
}

loc_800529A8:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_800529B4;
    }
}

loc_800529AC:
{
    f0.d = MemoryInline::FlatReadFloat32((r11 + 40));
    MemoryInline::FlatWriteFloat32(r8, f0.d);
}

loc_800529B4:
{
}

loc_800529B8:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_800529C4;
    }
}

loc_800529BC:
{
    f0.d = MemoryInline::FlatReadFloat32((r11 + 44));
    MemoryInline::FlatWriteFloat32(r9, f0.d);
}

loc_800529C4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r10), static_cast<int32_t>(0));
}

loc_800529C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800529E4;
    }
}

loc_800529CC:
{
    r3 = MemoryInline::FlatRead32((r11 + 36));
    r0 = (r3 ^ 1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    MemoryInline::FlatWrite8(r10, static_cast<uint8_t>(r0));
}

loc_800529E4:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000FF9 gpr_write=0x00000819 gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80052930 func_80052930 preserves=true fpr_mask=0x00000000
