#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F0064(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801F0064;

loc_801F0064:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = -1;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r5 = (r1 + 12);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    ctx->lr = 0x801F0088u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F5C48u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F008C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F0094;
    }
}

loc_801F0090:
{
    goto loc_801F0200;
}

loc_801F0094:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_801F009C:
{
    r5 = MemoryInline::FlatRead16((r31 + 20));
    r4 = MemoryInline::FlatRead32((r3 + 8));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F00B0;
    }
}

loc_801F00A8:
{
    r30 = 10;
    goto loc_801F0100;
}

loc_801F00B0:
{
    r3 = MemoryInline::FlatRead32((r31 + 6260));
    r8 = (r1 + 8);
    r7 = MemoryInline::FlatRead16(r31);
    r6 = 1;
    ctx->lr = 0x801F00C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F32F4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801F00C8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801F00FC;
    }
}

loc_801F00CC:
{
}

loc_801F00D0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(21))) {
        goto loc_801F00F4;
    }
}

loc_801F00D4:
{
    r3 = MemoryInline::FlatRead32((r31 + 6260));
    // inline leaf 0x801F3EC8 (7 guest instruction(s))
    r0 = (r3 & 255);
    r3 = 0x80360000u;
    r0 = (r0 * 44);
    r3 = (r3 + -23936);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 1912));
    // end of inlined leaf 0x801F3EC8
    r4 = 0x80360000u;
    r30 = 4096;
    r4 = (r4 + -20912);
    MemoryInline::FlatWriteRam32((r4 + 32), r3);
    MemoryInline::FlatWrite32((r31 + 6232), r3);
    goto loc_801F0100;
}

loc_801F00F4:
{
    r30 = -1;
    goto loc_801F0100;
}

loc_801F00FC:
{
    r30 = 0;
}

loc_801F0100:
{
}

loc_801F0104:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_801F0114;
    }
}

loc_801F0108:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_801F0110:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_801F0118;
    }
}

loc_801F0114:
{
    r30 = 17;
}

loc_801F0118:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_801F011C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F01F0;
    }
}

loc_801F0120:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_801F0128:
{
    r0 = MemoryInline::FlatRead32((r31 + 56));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    MemoryInline::FlatWrite8((r3 + 488), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r31 + 56));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_1 & 255);
    MemoryInline::FlatWrite8((r3 + 489), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r31 + 56));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r0 = (r0_rot_2 & 255);
    MemoryInline::FlatWrite8((r3 + 490), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r31 + 56));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_3 & 255);
    MemoryInline::FlatWrite8((r3 + 491), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r5 = MemoryInline::FlatRead16((r31 + 20));
    r4 = MemoryInline::FlatRead32((r3 + 8));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F0188;
    }
}

loc_801F0180:
{
    r30 = 10;
    goto loc_801F01D8;
}

loc_801F0188:
{
    r3 = MemoryInline::FlatRead32((r31 + 6260));
    r8 = (r1 + 8);
    r7 = MemoryInline::FlatRead16(r31);
    r6 = 1;
    ctx->lr = 0x801F019Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F3508u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801F01A0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801F01D4;
    }
}

loc_801F01A4:
{
}

loc_801F01A8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(21))) {
        goto loc_801F01CC;
    }
}

loc_801F01AC:
{
    r3 = MemoryInline::FlatRead32((r31 + 6260));
    // inline leaf 0x801F3EC8 (7 guest instruction(s))
    r0 = (r3 & 255);
    r3 = 0x80360000u;
    r0 = (r0 * 44);
    r3 = (r3 + -23936);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 1912));
    // end of inlined leaf 0x801F3EC8
    r4 = 0x80360000u;
    r30 = 4096;
    r4 = (r4 + -20912);
    MemoryInline::FlatWriteRam32((r4 + 32), r3);
    MemoryInline::FlatWrite32((r31 + 6232), r3);
    goto loc_801F01D8;
}

loc_801F01CC:
{
    r30 = -1;
    goto loc_801F01D8;
}

loc_801F01D4:
{
    r30 = 0;
}

loc_801F01D8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_801F01DC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F01EC;
    }
}

loc_801F01E0:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_801F01E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F01F0;
    }
}

loc_801F01EC:
{
    r30 = 17;
}

loc_801F01F0:
{
    r4 = MemoryInline::FlatRead32((r1 + 12));
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F5CBCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r3 = r30;
}

loc_801F0200:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801F0064 func_801F0064 preserves=true fpr_mask=0x00000000
