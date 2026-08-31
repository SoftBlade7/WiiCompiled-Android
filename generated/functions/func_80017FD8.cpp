#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80017FD8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r31_mdest_0 = 0;
    uint32_t r31_mdest_1 = 0;
    uint32_t r31_mdest_2 = 0;
    uint32_t r31_mrot_0 = 0;
    uint32_t r31_mrot_1 = 0;
    uint32_t r31_mrot_2 = 0;
    uint32_t r31_rot_0 = 0;
    uint32_t r31_rot_1 = 0;
    uint32_t r31_rot_2 = 0;
    uint32_t r31_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80017FD8;

loc_80017FD8:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r3 = 2146435072;
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f2.d);
    r8 = MemoryInline::FlatRead32((r1 + 20));
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r0 = (0 - r8);
    r4 = MemoryInline::FlatRead32((r1 + 16));
    r0 = (r8 | r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f1.d);
    r6 = (r4 & 2147483647);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r0 = (r6 | r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
}

loc_80018018:
{
    r9 = MemoryInline::FlatRead32((r1 + 12));
    r7 = (r5 & 2147483647);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8001803C;
    }
}

loc_80018024:
{
    r0 = (0 - r9);
    r0 = (r9 | r0);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
    r0 = (r7 | r0);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
}

loc_80018038:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80018044;
    }
}

loc_8001803C:
{
    f1.d = (f2.d + f1.d);
    goto loc_8001821C;
}

loc_80018044:
{
    r0 = (r4 + -1072693248);
    r0 = (r0 | r8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80018058;
    }
}

loc_80018050:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001B1E8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    goto loc_8001821C;
}

loc_80018058:
{
    r0 = (r7 | r9);
    r31_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r31 = (r31_rot_1 & 2);
    r31_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r31_mrot_1 = (r31_rot_2 & 1);
    r31_mdest_1 = (r31 & -2);
    r31 = (r31_mdest_1 | r31_mrot_1);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80018098;
    }
}

loc_80018068:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(1));
}

loc_8001806C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8001821C;
    }
}

loc_80018070:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(2));
}

loc_80018074:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80018088;
    }
}

loc_80018078:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(3));
}

loc_8001807C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80018090;
    }
}

loc_80018080:
{
    goto loc_80018098;
}

loc_80018088:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -32216));
    goto loc_8001821C;
}

loc_80018090:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -32208));
    goto loc_8001821C;
}

loc_80018098:
{
    r0 = (r6 | r8);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800180B8;
    }
}

loc_800180A0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_800180A4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800180B0;
    }
}

loc_800180A8:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -32200));
    goto loc_8001821C;
}

loc_800180B0:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -32192));
    goto loc_8001821C;
}

loc_800180B8:
{
    r0 = (r6 + -2146435072);
}

loc_800180C0:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_80018158;
    }
}

loc_800180C4:
{
    r0 = (r7 + -2146435072);
}

loc_800180CC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_80018114;
    }
}

loc_800180D0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_800180D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800180F4;
    }
}

loc_800180D8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(1));
}

loc_800180DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800180FC;
    }
}

loc_800180E0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(2));
}

loc_800180E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80018104;
    }
}

loc_800180E8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(3));
}

loc_800180EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001810C;
    }
}

loc_800180F0:
{
    goto loc_80018158;
}

loc_800180F4:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -32184));
    goto loc_8001821C;
}

loc_800180FC:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -32176));
    goto loc_8001821C;
}

loc_80018104:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -32168));
    goto loc_8001821C;
}

loc_8001810C:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -32160));
    goto loc_8001821C;
}

loc_80018114:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80018118:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80018138;
    }
}

loc_8001811C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(1));
}

loc_80018120:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80018140;
    }
}

loc_80018124:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(2));
}

loc_80018128:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80018148;
    }
}

loc_8001812C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(3));
}

loc_80018130:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80018150;
    }
}

loc_80018134:
{
    goto loc_80018158;
}

loc_80018138:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -32152));
    goto loc_8001821C;
}

loc_80018140:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -32144));
    goto loc_8001821C;
}

loc_80018148:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -32216));
    goto loc_8001821C;
}

loc_80018150:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -32208));
    goto loc_8001821C;
}

loc_80018158:
{
    r0 = (r7 + -2146435072);
}

loc_80018160:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(0))) {
        goto loc_8001817C;
    }
}

loc_80018164:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80018168:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80018174;
    }
}

loc_8001816C:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -32200));
    goto loc_8001821C;
}

loc_80018174:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -32192));
    goto loc_8001821C;
}

loc_8001817C:
{
    r0 = (r7 - r6);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(20) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 20);
}

loc_80018188:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(60))) {
        goto loc_80018198;
    }
}

loc_8001818C:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -32192));
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f1.d);
    goto loc_800181C4;
}

loc_80018198:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8001819C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800181B4;
    }
}

loc_800181A0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-60));
}

loc_800181A4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800181B4;
    }
}

loc_800181A8:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -32152));
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f1.d);
    goto loc_800181C4;
}

loc_800181B4:
{
    f0.d = (f1.d / f2.d);
    f1.d = std::fabs(f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001B1E8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f1.d);
}

loc_800181C4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_800181C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001821C;
    }
}

loc_800181CC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(1));
}

loc_800181D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800181E4;
    }
}

loc_800181D4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(2));
}

loc_800181D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800181F8;
    }
}

loc_800181DC:
{
    goto loc_8001820C;
}

loc_800181E4:
{
    r0 = MemoryInline::FlatRead32((r1 + 24));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 24));
    goto loc_8001821C;
}

loc_800181F8:
{
    f2.d = MemoryInline::FlatReadFloat64((r2 + -32136));
    f0.d = MemoryInline::FlatReadFloat64((r2 + -32216));
    f1.d = (f1.d - f2.d);
    f1.d = (f0.d - f1.d);
    goto loc_8001821C;
}

loc_8001820C:
{
    f2.d = MemoryInline::FlatReadFloat64((r2 + -32136));
    f0.d = MemoryInline::FlatReadFloat64((r2 + -32216));
    f1.d = (f1.d - f2.d);
    f1.d = (f1.d - f0.d);
}

loc_8001821C:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x800003FF gpr_write=0x800003FB gpr_return=0x00000018 fpr_read=0x00003FFF fpr_write=0x00003FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80017FD8 func_80017FD8 preserves=true fpr_mask=0x00000000
