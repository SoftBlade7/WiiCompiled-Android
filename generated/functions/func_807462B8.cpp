#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807462B8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807462B8;

loc_807462B8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r7 = 0x808D0000u;
    r7 = (r7 + -18696);
    r9 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead16((r7 + 22));
    r8 = MemoryInline::FlatRead16((r7 + 20));
    r0 = (r9 & r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    r8 = (r9 & r8);
    r0 = (0 - r8);
    r0 = (r0 | r8);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807462F8;
    }
}

loc_807462E8:
{
    r0 = MemoryInline::FlatRead16((r7 + 16));
    r0 = (r9 & r0);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 134217727);
}

loc_807462F8:
{
}

loc_807462FC:
{
    r10 = 0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8074632C;
    }
}

loc_80746304:
{
    r0 = MemoryInline::FlatRead8((r3 + 17));
}

loc_8074630C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80746360;
    }
}

loc_80746310:
{
    r8 = MemoryInline::FlatRead16(r4);
    r0 = 1;
    r10 = 1;
    r8 = (r8 | 4);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r8));
    MemoryInline::FlatWrite8((r3 + 17), static_cast<uint8_t>(r0));
    goto loc_80746360;
}

loc_8074632C:
{
    r8 = 0x809C0000u;
    r0 = MemoryInline::FlatRead16((r8 + 11328));
    r0 = (r9 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80746358;
    }
}

loc_8074633C:
{
    r0 = MemoryInline::FlatRead8((r3 + 17));
}

loc_80746344:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80746360;
    }
}

loc_80746348:
{
    r0 = MemoryInline::FlatRead16(r4);
    r0 = (r0 | 4);
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    goto loc_80746360;
}

loc_80746358:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 17), static_cast<uint8_t>(r0));
}

loc_80746360:
{
    r4 = MemoryInline::FlatRead32((r3 + 8));
}

loc_80746368:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_80746378;
    }
}

loc_8074636C:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite32((r3 + 8), r0);
    goto loc_807463F4;
}

loc_80746378:
{
}

loc_8074637C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 8), r0);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_807463C8;
    }
}

loc_8074638C:
{
    r4 = MemoryInline::FlatRead32(r5);
    r0 = (r4 & 1);
}

loc_80746394:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807463AC;
    }
}

loc_80746398:
{
    r4 = MemoryInline::FlatRead16((r7 + 26));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = -1;
    MemoryInline::FlatWrite32((r3 + 8), r4);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    goto loc_807463F4;
}

loc_807463AC:
{
    r0 = (r4 & 2);
}

loc_807463B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807463F4;
    }
}

loc_807463B4:
{
    r4 = MemoryInline::FlatRead16((r7 + 26));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 8), r4);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    goto loc_807463F4;
}

loc_807463C8:
{
    r4 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r5 + 8));
    r0 = MemoryInline::FlatRead16((r4 + 11328));
    r0 = (r5 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807463F4;
    }
}

loc_807463DC:
{
    r4 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + -844));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r0));
}

loc_807463F4:
{
    r8 = MemoryInline::FlatRead32((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(0));
}

loc_807463FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80746444;
    }
}

loc_80746400:
{
    r5 = MemoryInline::FlatRead8((r7 + 24));
    r0 = 1127219200;
    r4 = 0x808A0000u;
    r3 = 0x80890000u;
    r5 = (r5 * r8);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f2.d = MemoryInline::FlatReadFloat64((r4 + 11232));
    f0.d = MemoryInline::FlatReadFloat32((r3 + -844));
    r0 = (r5 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword1;
    MemoryInline::FlatWrite8(r6, static_cast<uint8_t>(r0));
}

loc_80746444:
{
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000007FB gpr_write=0x000007BB gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807462B8 func_807462B8 preserves=true fpr_mask=0x00000000
