#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80848E44(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r5_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80848E44;

loc_80848E44:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = 0;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWrite32((r3 + 3480), r0);
    MemoryInline::FlatWrite32((r3 + 3484), r6);
    ctx->lr = 0x80848E74u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80848F94u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r31 + 3484));
}

loc_80848E7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80848E94;
    }
}

loc_80848E80:
{
}

loc_80848E84:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80848EA4;
    }
}

loc_80848E88:
{
}

loc_80848E8C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80848EAC;
    }
}

loc_80848E90:
{
    goto loc_80848EBC;
}

loc_80848E94:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10480));
    r0 = MemoryInline::FlatRead8((r3 + 724));
    goto loc_80848EC0;
}

loc_80848EA4:
{
    r0 = 6;
    goto loc_80848EC0;
}

loc_80848EAC:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10480));
    r0 = MemoryInline::FlatRead8((r3 + 744));
    goto loc_80848EC0;
}

loc_80848EBC:
{
    r0 = 0;
}

loc_80848EC0:
{
}

loc_80848EC4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80848EFC;
    }
}

loc_80848EC8:
{
    r29 = 0;
    r30 = 1;
}

loc_80848ED0:
{
    r3 = MemoryInline::FlatRead32((r31 + 1724));
    r0 = PPC_Slw(static_cast<uint32_t>(r30), static_cast<uint32_t>(r29));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80848EF0;
    }
}

loc_80848EE0:
{
    r3 = MemoryInline::FlatRead32((r31 + 72));
    r4 = r29;
    r3 = MemoryInline::FlatRead32(r3);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->xer = xer;
    InvokeDirectCpu<0x805BDB44u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
}

loc_80848EF0:
{
    r29 = (r29 + 1);
}

loc_80848EF8:
{
    if ((static_cast<int32_t>(r29) < static_cast<int32_t>(5))) {
        goto loc_80848ED0;
    }
}

loc_80848EFC:
{
    r0 = MemoryInline::FlatRead32((r31 + 3484));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80848F04:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80848F1C;
    }
}

loc_80848F08:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80848F0C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80848F2C;
    }
}

loc_80848F10:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80848F14:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80848F34;
    }
}

loc_80848F18:
{
    goto loc_80848F44;
}

loc_80848F1C:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10480));
    r6 = MemoryInline::FlatRead8((r3 + 724));
    goto loc_80848F48;
}

loc_80848F2C:
{
    r6 = 6;
    goto loc_80848F48;
}

loc_80848F34:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10480));
    r6 = MemoryInline::FlatRead8((r3 + 744));
    goto loc_80848F48;
}

loc_80848F44:
{
    r6 = 0;
}

loc_80848F48:
{
    r7 = MemoryInline::FlatRead32((r31 + 3480));
    r3 = (r31 + 1732);
    r0 = (r7 + 10);
    r5 = (0 - r7);
    r0 = (r6 ^ r0);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r0) >> 1);
    r5 = (r5 & ~r7);
    r0 = (r0 & r6);
    r0 = (r4 - r0);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r4 = (r4_rot_0 & 1);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r5 = (r5_rot_0 & 1);
    ctx->lr = 0x80848F78u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80636264u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80848E44 func_80848E44 preserves=true fpr_mask=0x00000000
