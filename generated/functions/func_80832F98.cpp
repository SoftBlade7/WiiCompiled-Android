#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80832F98(CpuContext* MKW_RESTRICT ctx)
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
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80832F98;

loc_80832F98:
{
    r4 = 0x808B0000u;
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 80), static_cast<uint16_t>(r0));
    r6 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r4 + -13832));
    goto loc_80832FF8;
}

loc_80832FB0:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & 4080);
    r5 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r5 + 17));
}

loc_80832FC0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80832FF4;
    }
}

loc_80832FC4:
{
    r7 = 0;
    goto loc_80832FE4;
}

loc_80832FCC:
{
    r0 = (r7 & 255);
    r4 = MemoryInline::FlatRead32((r5 + 8));
    r0 = (r0 * 44);
    r7 = (r7 + 1);
    r4 = (r4 + r0);
    MemoryInline::FlatWriteFloat32((r4 + 40), f0.d);
}

loc_80832FE4:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
    r4 = (r7 & 255);
}

loc_80832FF0:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_80832FCC;
    }
}

loc_80832FF4:
{
    r6 = (r6 + 1);
}

loc_80832FF8:
{
    r0 = MemoryInline::FlatRead8((r3 + 5));
    r4 = (r6 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_80833004:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80832FB0;
    }
}

loc_80833008:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F9 gpr_write=0x000000F1 gpr_return=0x00000010 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80832F98 func_80832F98 preserves=true fpr_mask=0x00000000
