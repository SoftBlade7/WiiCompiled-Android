#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807BD9E8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_807BD9E8;

loc_807BD9E8:
{
    r7 = 0x809C0000u;
    r3 = 0x808A0000u;
    r7 = (r7 + 14552);
    r0 = 0;
    r9 = MemoryInline::FlatRead32((r7 + 768));
    r8 = (r7 + 0);
    MemoryInline::FlatWriteRam32((r7 + 772), r0);
    r6 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 26324));
    ctr = r9;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(0));
}

loc_807BDA14:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807BDA6C;
    }
}

loc_807BDA18:
{
    r3 = MemoryInline::FlatRead32(r8);
    r3 = (r3 & r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807BDA64;
    }
}

loc_807BDA24:
{
    r3 = MemoryInline::FlatRead16((r8 + 4));
    r3 = (r3 & 31);
    r3 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r3));
    r3 = (r5 & r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807BDA64;
    }
}

loc_807BDA38:
{
    f0.d = MemoryInline::FlatReadFloat32((r8 + 8));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_807BDA40:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807BDA50;
    }
}

loc_807BDA44:
{
    f1.d = f0.d;
    r3 = 1;
    goto loc_807BDA54;
}

loc_807BDA50:
{
    r3 = 0;
}

loc_807BDA54:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807BDA58:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807BDA64;
    }
}

loc_807BDA5C:
{
    r0 = r8;
    MemoryInline::FlatWriteRam32((r7 + 772), r8);
}

loc_807BDA64:
{
    r8 = (r8 + 12);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_807BDA18;
    }
}

loc_807BDA6C:
{
    r3 = (0 - r0);
    r0 = (r3 | r0);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000003C9 gpr_return=0x00000008 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807BD9E8 func_807BD9E8 preserves=true fpr_mask=0x00000000
