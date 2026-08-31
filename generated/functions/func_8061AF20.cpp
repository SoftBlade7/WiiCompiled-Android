#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8061AF20(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8061AF20;

loc_8061AF20:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r26);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 12), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 20), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 24), r30);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 28), r31);
    }
    r26 = r3;
    r3 = MemoryInline::FlatRead32((r4 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    // inline leaf 0x80622EA0 (10 guest instruction(s))
}

loc_inl0_0x80622EA0:
{
    r4 = MemoryInline::FlatRead32((r3 + 892));
}

loc_inl0_0x80622EA8:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(1))) {
        goto loc_inl0_0x80622EB4;
    }
}

loc_inl0_0x80622EAC:
{
    r3 = 0;
    goto loc_inl0_cont_80622EA0;
}

loc_inl0_0x80622EB4:
{
    r0 = (r4 + -1);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 852));
}

loc_inl0_cont_80622EA0:
{
    // end of inlined leaf 0x80622EA0
}

loc_8061AF48:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8061AF74;
    }
}

loc_8061AF4C:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_8061AF54:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_8061AF68;
    }
}

loc_8061AF58:
{
    r3 = MemoryInline::FlatRead32((r3 + 56));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    MemoryInline::FlatWrite32((r26 + 88), r0);
    goto loc_8061AF7C;
}

loc_8061AF68:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r26 + 88), r0);
    goto loc_8061AF7C;
}

loc_8061AF74:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r26 + 88), r0);
}

loc_8061AF7C:
{
    r29 = (r26 + 4);
    r28 = 0;
    r30 = 0x809C0000u;
    r31 = 0x80380000u;
    r27 = 0;
}

loc_8061AF90:
{
    r0 = MemoryInline::FlatRead32((r29 + 8));
}

loc_8061AF98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8061AFB8;
    }
}

loc_8061AF9C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8061AFA0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061B034;
    }
}

loc_8061AFA4:
{
}

loc_8061AFA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8061B198;
    }
}

loc_8061AFAC:
{
}

loc_8061AFB0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8061B274;
    }
}

loc_8061AFB4:
{
    goto loc_8061B314;
}

loc_8061AFB8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_8061AFBC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061AFE4;
    }
}

loc_8061AFC0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(1));
}

loc_8061AFC4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061AFF0;
    }
}

loc_8061AFC8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(2));
}

loc_8061AFCC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061AFFC;
    }
}

loc_8061AFD0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(3));
}

loc_8061AFD4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061B008;
    }
}

loc_8061AFD8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(4));
}

loc_8061AFDC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061B014;
    }
}

loc_8061AFE0:
{
    goto loc_8061B020;
}

loc_8061AFE4:
{
    r3 = MemoryInline::FlatRead32((r30 + -10484));
    r3 = (r3 + 4);
    goto loc_8061B024;
}

loc_8061AFF0:
{
    r3 = MemoryInline::FlatRead32((r30 + -10484));
    r3 = (r3 + 240);
    goto loc_8061B024;
}

loc_8061AFFC:
{
    r3 = MemoryInline::FlatRead32((r30 + -10484));
    r3 = (r3 + 476);
    goto loc_8061B024;
}

loc_8061B008:
{
    r3 = MemoryInline::FlatRead32((r30 + -10484));
    r3 = (r3 + 712);
    goto loc_8061B024;
}

loc_8061B014:
{
    r3 = MemoryInline::FlatRead32((r30 + -10484));
    r3 = (r3 + 5556);
    goto loc_8061B024;
}

loc_8061B020:
{
    r3 = 0;
}

loc_8061B024:
{
    MemoryInline::FlatWrite32((r29 + 12), r3);
    ctx->lr = 0x8061B02Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8061BE40u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r29 + 4), r3);
    goto loc_8061B314;
}

loc_8061B034:
{
    r3 = MemoryInline::FlatRead32((r31 + 24520));
    r26 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 84));
    r3 = MemoryInline::FlatRead32((r3 + 36));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8061B054u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = (1 - r3);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(1) >= static_cast<uint32_t>(r3) ? 1u : 0u) << 29);
    r0 = (r3 + -1);
    r0 = (r4 | r0);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & 1);
}

loc_8061B064:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8061B100;
    }
}

loc_8061B068:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_8061B06C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061B094;
    }
}

loc_8061B070:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(1));
}

loc_8061B074:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061B0AC;
    }
}

loc_8061B078:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(2));
}

loc_8061B07C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061B0C4;
    }
}

loc_8061B080:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(3));
}

loc_8061B084:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061B0DC;
    }
}

loc_8061B088:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(4));
}

loc_8061B08C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061B0F4;
    }
}

loc_8061B090:
{
    goto loc_8061B100;
}

loc_8061B094:
{
    r3 = MemoryInline::FlatRead32((r30 + -10484));
    r4 = 0;
    r5 = 0;
    ctx->lr = 0x8061B0A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80523EBCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r26 = r3;
    goto loc_8061B100;
}

loc_8061B0AC:
{
    r3 = MemoryInline::FlatRead32((r30 + -10484));
    r4 = 1;
    r5 = 0;
    ctx->lr = 0x8061B0BCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80523EBCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r26 = r3;
    goto loc_8061B100;
}

loc_8061B0C4:
{
    r3 = MemoryInline::FlatRead32((r30 + -10484));
    r4 = 2;
    r5 = 0;
    ctx->lr = 0x8061B0D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80523EBCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r26 = r3;
    goto loc_8061B100;
}

loc_8061B0DC:
{
    r3 = MemoryInline::FlatRead32((r30 + -10484));
    r4 = 3;
    r5 = 0;
    ctx->lr = 0x8061B0ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80523EBCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r26 = r3;
    goto loc_8061B100;
}

loc_8061B0F4:
{
    r3 = MemoryInline::FlatRead32((r30 + -10484));
    ctx->lr = 0x8061B0FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80523BC8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r26 = r3;
}

loc_8061B100:
{
}

loc_8061B104:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_8061B314;
    }
}

loc_8061B108:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_8061B10C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061B134;
    }
}

loc_8061B110:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(1));
}

loc_8061B114:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061B140;
    }
}

loc_8061B118:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(2));
}

loc_8061B11C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061B14C;
    }
}

loc_8061B120:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(3));
}

loc_8061B124:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061B158;
    }
}

loc_8061B128:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(4));
}

loc_8061B12C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061B164;
    }
}

loc_8061B130:
{
    goto loc_8061B170;
}

loc_8061B134:
{
    r3 = MemoryInline::FlatRead32((r30 + -10484));
    r3 = (r3 + 4);
    goto loc_8061B174;
}

loc_8061B140:
{
    r3 = MemoryInline::FlatRead32((r30 + -10484));
    r3 = (r3 + 240);
    goto loc_8061B174;
}

loc_8061B14C:
{
    r3 = MemoryInline::FlatRead32((r30 + -10484));
    r3 = (r3 + 476);
    goto loc_8061B174;
}

loc_8061B158:
{
    r3 = MemoryInline::FlatRead32((r30 + -10484));
    r3 = (r3 + 712);
    goto loc_8061B174;
}

loc_8061B164:
{
    r3 = MemoryInline::FlatRead32((r30 + -10484));
    r3 = (r3 + 5556);
    goto loc_8061B174;
}

loc_8061B170:
{
    r3 = 0;
}

loc_8061B174:
{
    MemoryInline::FlatWrite32((r29 + 12), r3);
    ctx->lr = 0x8061B17Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8061BE40u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8061B180:
{
    MemoryInline::FlatWrite32((r29 + 4), r3);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8061B314;
    }
}

loc_8061B188:
{
    r0 = MemoryInline::FlatRead32((r29 + 4));
    MemoryInline::FlatWrite32(r29, r0);
    MemoryInline::FlatWrite32((r29 + 8), r27);
    goto loc_8061B314;
}

loc_8061B198:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_8061B19C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061B1C4;
    }
}

loc_8061B1A0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(1));
}

loc_8061B1A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061B1D0;
    }
}

loc_8061B1A8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(2));
}

loc_8061B1AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061B1DC;
    }
}

loc_8061B1B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(3));
}

loc_8061B1B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061B1E8;
    }
}

loc_8061B1B8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(4));
}

loc_8061B1BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061B1F4;
    }
}

loc_8061B1C0:
{
    goto loc_8061B200;
}

loc_8061B1C4:
{
    r3 = MemoryInline::FlatRead32((r30 + -10484));
    r3 = (r3 + 4);
    goto loc_8061B204;
}

loc_8061B1D0:
{
    r3 = MemoryInline::FlatRead32((r30 + -10484));
    r3 = (r3 + 240);
    goto loc_8061B204;
}

loc_8061B1DC:
{
    r3 = MemoryInline::FlatRead32((r30 + -10484));
    r3 = (r3 + 476);
    goto loc_8061B204;
}

loc_8061B1E8:
{
    r3 = MemoryInline::FlatRead32((r30 + -10484));
    r3 = (r3 + 712);
    goto loc_8061B204;
}

loc_8061B1F4:
{
    r3 = MemoryInline::FlatRead32((r30 + -10484));
    r3 = (r3 + 5556);
    goto loc_8061B204;
}

loc_8061B200:
{
    r3 = 0;
}

loc_8061B204:
{
    MemoryInline::FlatWrite32((r29 + 12), r3);
    ctx->lr = 0x8061B20Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8061BE40u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r29 + 4), r3);
}

loc_8061B214:
{
    r0 = MemoryInline::FlatRead32(r29);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8061B224;
    }
}

loc_8061B21C:
{
    r0 = 0;
    goto loc_8061B248;
}

loc_8061B224:
{
}

loc_8061B228:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8061B234;
    }
}

loc_8061B22C:
{
    r0 = 0;
    goto loc_8061B248;
}

loc_8061B234:
{
    r4 = (r3 & 4080);
    r0 = (r0 & 4080);
    r0 = (r0 - r4);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_4 & 134217727);
}

loc_8061B248:
{
}

loc_8061B24C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8061B314;
    }
}

loc_8061B250:
{
    r5 = MemoryInline::FlatRead32((r29 + 12));
    r4 = MemoryInline::FlatRead16((r5 + 92));
    r0 = MemoryInline::FlatRead16((r5 + 144));
    r4 = (r4 & 1);
    r0 = (r4 & ~r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8061B314;
    }
}

loc_8061B268:
{
    MemoryInline::FlatWrite32(r29, r3);
    MemoryInline::FlatWrite32((r29 + 8), r27);
    goto loc_8061B314;
}

loc_8061B274:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_8061B278:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061B2A0;
    }
}

loc_8061B27C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(1));
}

loc_8061B280:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061B2AC;
    }
}

loc_8061B284:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(2));
}

loc_8061B288:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061B2B8;
    }
}

loc_8061B28C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(3));
}

loc_8061B290:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061B2C4;
    }
}

loc_8061B294:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(4));
}

loc_8061B298:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8061B2D0;
    }
}

loc_8061B29C:
{
    goto loc_8061B2DC;
}

loc_8061B2A0:
{
    r3 = MemoryInline::FlatRead32((r30 + -10484));
    r3 = (r3 + 4);
    goto loc_8061B2E0;
}

loc_8061B2AC:
{
    r3 = MemoryInline::FlatRead32((r30 + -10484));
    r3 = (r3 + 240);
    goto loc_8061B2E0;
}

loc_8061B2B8:
{
    r3 = MemoryInline::FlatRead32((r30 + -10484));
    r3 = (r3 + 476);
    goto loc_8061B2E0;
}

loc_8061B2C4:
{
    r3 = MemoryInline::FlatRead32((r30 + -10484));
    r3 = (r3 + 712);
    goto loc_8061B2E0;
}

loc_8061B2D0:
{
    r3 = MemoryInline::FlatRead32((r30 + -10484));
    r3 = (r3 + 5556);
    goto loc_8061B2E0;
}

loc_8061B2DC:
{
    r3 = 0;
}

loc_8061B2E0:
{
    MemoryInline::FlatWrite32((r29 + 12), r3);
    ctx->lr = 0x8061B2E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8061BE40u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r12 = ctx->gpr[12];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r29 + 4), r3);
    r0 = MemoryInline::FlatRead32(r29);
}

loc_8061B2F4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_8061B314;
    }
}

loc_8061B2F8:
{
    r4 = MemoryInline::FlatRead32((r29 + 12));
    r3 = MemoryInline::FlatRead16((r4 + 92));
    r0 = MemoryInline::FlatRead16((r4 + 144));
    r3 = (r3 & 1);
    r0 = (r3 & ~r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8061B314;
    }
}

loc_8061B310:
{
    MemoryInline::FlatWrite32((r29 + 8), r27);
}

loc_8061B314:
{
    r28 = (r28 + 1);
    r29 = (r29 + 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(5));
}

loc_8061B320:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8061AF90;
    }
}

loc_8061B324:
{
    r26 = MemoryInline::FlatRead32((r1 + 8));
    r27 = MemoryInline::FlatRead32((r1 + 12));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[12] = r12;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8061AF20 func_8061AF20 preserves=true fpr_mask=0x00000000
