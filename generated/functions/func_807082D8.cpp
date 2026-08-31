#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_807028E4_statefree(uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_807028E4_statefree_v0(uint32_t);

extern "C" void func_807082D8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807082D8;

loc_807082D8:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    f31.d = f1.d;
    r5 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    MemoryInline::FlatWriteRam32((r1 + 32), r28);
    r3 = MemoryInline::FlatRead32((r5 + -10456));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80532030u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_80708318:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80708330;
    }
}

loc_8070831C:
{
    r0 = MemoryInline::FlatRead8((r30 + 225));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80708324:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80708330;
    }
}

loc_80708328:
{
    r3 = 0;
    goto loc_80708AF8;
}

loc_80708330:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 96), 0, 129u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 81u, (r30 + 177));
}

loc_80708338:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8070836C;
    }
}

loc_8070833C:
{
    r0 = (r31 + -464);
}

loc_80708344:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8070836C;
    }
}

loc_80708348:
{
    r0 = (r31 + -761);
}

loc_80708350:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_8070836C;
    }
}

loc_80708354:
{
}

loc_80708358:
{
    if ((static_cast<uint32_t>(r31) == static_cast<uint32_t>(219))) {
        goto loc_8070836C;
    }
}

loc_8070835C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(237));
}

loc_80708360:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070836C;
    }
}

loc_80708364:
{
    r3 = 0;
    goto loc_80708AF8;
}

loc_8070836C:
{
    r0 = (r31 + -697);
}

loc_80708374:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80708398;
    }
}

loc_80708378:
{
    r0 = (r31 + -781);
}

loc_80708380:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_80708398;
    }
}

loc_80708384:
{
}

loc_80708388:
{
    if ((static_cast<uint32_t>(r31) == static_cast<uint32_t>(408))) {
        goto loc_80708398;
    }
}

loc_8070838C:
{
}

loc_80708390:
{
    if ((static_cast<uint32_t>(r31) == static_cast<uint32_t>(407))) {
        goto loc_807083AC;
    }
}

loc_80708394:
{
    goto loc_807083DC;
}

loc_80708398:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 128u, (r30 + 224));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807083A0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807083DC;
    }
}

loc_807083A4:
{
    r3 = 0;
    goto loc_80708AF8;
}

loc_807083AC:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 128u, (r30 + 224));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807083B4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807083C0;
    }
}

loc_807083B8:
{
    r3 = 0;
    goto loc_80708AF8;
}

loc_807083C0:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2932));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807083D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807083DC;
    }
}

loc_807083D4:
{
    r3 = 0;
    goto loc_80708AF8;
}

loc_807083DC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(615));
}

loc_807083E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708808;
    }
}

loc_807083E4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8070842C;
    }
}

loc_807083E8:
{
}

loc_807083EC:
{
    if ((static_cast<int32_t>(r31) >= static_cast<int32_t>(415))) {
        goto loc_80708414;
    }
}

loc_807083F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(408));
}

loc_807083F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708540;
    }
}

loc_807083F8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80708408;
    }
}

loc_807083FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(283));
}

loc_80708400:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708468;
    }
}

loc_80708404:
{
    goto loc_80708910;
}

loc_80708408:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(412));
}

loc_8070840C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807088C8;
    }
}

loc_80708410:
{
    goto loc_80708910;
}

loc_80708414:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(563));
}

loc_80708418:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708808;
    }
}

loc_8070841C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80708910;
    }
}

loc_80708420:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(500));
}

loc_80708424:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708480;
    }
}

loc_80708428:
{
    goto loc_80708910;
}

loc_8070842C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(761));
}

loc_80708430:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708808;
    }
}

loc_80708434:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80708450;
    }
}

loc_80708438:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(698));
}

loc_8070843C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708644;
    }
}

loc_80708440:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80708910;
    }
}

loc_80708444:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(697));
}

loc_80708448:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8070855C;
    }
}

loc_8070844C:
{
    goto loc_80708910;
}

loc_80708450:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(782));
}

loc_80708454:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708800;
    }
}

loc_80708458:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80708910;
    }
}

loc_8070845C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(781));
}

loc_80708460:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807087F8;
    }
}

loc_80708464:
{
    goto loc_80708910;
}

loc_80708468:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r30 + 96));
    r0 = (r0 & 1024);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80708470:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708910;
    }
}

loc_80708474:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r30 + 217), static_cast<uint8_t>(r0));
    goto loc_80708910;
}

loc_80708480:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r30 + 128));
    r3 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8070848C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807084B0;
    }
}

loc_80708490:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070849C;
    }
}

loc_80708494:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_807084A0;
}

loc_8070849C:
{
    r0 = -1;
}

loc_807084A0:
{
}

loc_807084A4:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(r0))) {
        goto loc_807084B0;
    }
}

loc_807084A8:
{
    r3 = (r30 + 128);
    goto loc_80708530;
}

loc_807084B0:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r30 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_807084B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807084DC;
    }
}

loc_807084BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807084C8;
    }
}

loc_807084C0:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_807084CC;
}

loc_807084C8:
{
    r0 = -1;
}

loc_807084CC:
{
}

loc_807084D0:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(r0))) {
        goto loc_807084DC;
    }
}

loc_807084D4:
{
    r3 = (r30 + 132);
    goto loc_80708530;
}

loc_807084DC:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r30 + 136));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_807084E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708508;
    }
}

loc_807084E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807084F4;
    }
}

loc_807084EC:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_807084F8;
}

loc_807084F4:
{
    r0 = -1;
}

loc_807084F8:
{
}

loc_807084FC:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(r0))) {
        goto loc_80708508;
    }
}

loc_80708500:
{
    r3 = (r30 + 136);
    goto loc_80708530;
}

loc_80708508:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r30 + 140));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80708510:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708530;
    }
}

loc_80708514:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708520;
    }
}

loc_80708518:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_80708524;
}

loc_80708520:
{
    r0 = -1;
}

loc_80708524:
{
}

loc_80708528:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(r0))) {
        goto loc_80708530;
    }
}

loc_8070852C:
{
    r3 = (r30 + 140);
}

loc_80708530:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80708534:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708910;
    }
}

loc_80708538:
{
    r3 = 0;
    goto loc_80708AF8;
}

loc_80708540:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 10232));
    r0 = MemoryInline::FlatRead32((r3 + 64));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_80708550:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80708910;
    }
}

loc_80708554:
{
    r3 = 0;
    goto loc_80708AF8;
}

loc_8070855C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 83u, (r30 + 179));
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 10408));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 18));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_80708578:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708584;
    }
}

loc_8070857C:
{
    r3 = 0;
    goto loc_80708AF8;
}

loc_80708584:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r30 + 128));
    r3 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80708590:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807085B4;
    }
}

loc_80708594:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807085A0;
    }
}

loc_80708598:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_807085A4;
}

loc_807085A0:
{
    r0 = -1;
}

loc_807085A4:
{
}

loc_807085A8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(698))) {
        goto loc_807085B4;
    }
}

loc_807085AC:
{
    r3 = (r30 + 128);
    goto loc_80708634;
}

loc_807085B4:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r30 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_807085BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807085E0;
    }
}

loc_807085C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807085CC;
    }
}

loc_807085C4:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_807085D0;
}

loc_807085CC:
{
    r0 = -1;
}

loc_807085D0:
{
}

loc_807085D4:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(698))) {
        goto loc_807085E0;
    }
}

loc_807085D8:
{
    r3 = (r30 + 132);
    goto loc_80708634;
}

loc_807085E0:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r30 + 136));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_807085E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070860C;
    }
}

loc_807085EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807085F8;
    }
}

loc_807085F0:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_807085FC;
}

loc_807085F8:
{
    r0 = -1;
}

loc_807085FC:
{
}

loc_80708600:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(698))) {
        goto loc_8070860C;
    }
}

loc_80708604:
{
    r3 = (r30 + 136);
    goto loc_80708634;
}

loc_8070860C:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r30 + 140));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80708614:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708634;
    }
}

loc_80708618:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708624;
    }
}

loc_8070861C:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_80708628;
}

loc_80708624:
{
    r0 = -1;
}

loc_80708628:
{
}

loc_8070862C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(698))) {
        goto loc_80708634;
    }
}

loc_80708630:
{
    r3 = (r30 + 140);
}

loc_80708634:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80708638:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708910;
    }
}

loc_8070863C:
{
    r3 = 0;
    goto loc_80708AF8;
}

loc_80708644:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 83u, (r30 + 179));
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 10408));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 18));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_80708660:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070866C;
    }
}

loc_80708664:
{
    r3 = 0;
    goto loc_80708AF8;
}

loc_8070866C:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r30 + 128));
    r3 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80708678:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070869C;
    }
}

loc_8070867C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708688;
    }
}

loc_80708680:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_8070868C;
}

loc_80708688:
{
    r0 = -1;
}

loc_8070868C:
{
}

loc_80708690:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(697))) {
        goto loc_8070869C;
    }
}

loc_80708694:
{
    r3 = (r30 + 128);
    goto loc_8070871C;
}

loc_8070869C:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r30 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_807086A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807086C8;
    }
}

loc_807086A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807086B4;
    }
}

loc_807086AC:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_807086B8;
}

loc_807086B4:
{
    r0 = -1;
}

loc_807086B8:
{
}

loc_807086BC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(697))) {
        goto loc_807086C8;
    }
}

loc_807086C0:
{
    r3 = (r30 + 132);
    goto loc_8070871C;
}

loc_807086C8:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r30 + 136));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_807086D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807086F4;
    }
}

loc_807086D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807086E0;
    }
}

loc_807086D8:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_807086E4;
}

loc_807086E0:
{
    r0 = -1;
}

loc_807086E4:
{
}

loc_807086E8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(697))) {
        goto loc_807086F4;
    }
}

loc_807086EC:
{
    r3 = (r30 + 136);
    goto loc_8070871C;
}

loc_807086F4:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r30 + 140));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_807086FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070871C;
    }
}

loc_80708700:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070870C;
    }
}

loc_80708704:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_80708710;
}

loc_8070870C:
{
    r0 = -1;
}

loc_80708710:
{
}

loc_80708714:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(697))) {
        goto loc_8070871C;
    }
}

loc_80708718:
{
    r3 = (r30 + 140);
}

loc_8070871C:
{
}

loc_80708720:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80708738;
    }
}

loc_80708724:
{
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070872C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708738;
    }
}

loc_80708730:
{
    r4 = 0;
    ctx->lr = 0x80708738u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8008E330u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80708738:
{
    r4 = MemoryInline::FlatRead32((r30 + 128));
    r3 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80708744:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708768;
    }
}

loc_80708748:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708754;
    }
}

loc_8070874C:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_80708758;
}

loc_80708754:
{
    r0 = -1;
}

loc_80708758:
{
}

loc_8070875C:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(r0))) {
        goto loc_80708768;
    }
}

loc_80708760:
{
    r3 = (r30 + 128);
    goto loc_807087E8;
}

loc_80708768:
{
    r4 = MemoryInline::FlatRead32((r30 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80708770:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708794;
    }
}

loc_80708774:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708780;
    }
}

loc_80708778:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_80708784;
}

loc_80708780:
{
    r0 = -1;
}

loc_80708784:
{
}

loc_80708788:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(r0))) {
        goto loc_80708794;
    }
}

loc_8070878C:
{
    r3 = (r30 + 132);
    goto loc_807087E8;
}

loc_80708794:
{
    r4 = MemoryInline::FlatRead32((r30 + 136));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8070879C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807087C0;
    }
}

loc_807087A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807087AC;
    }
}

loc_807087A4:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_807087B0;
}

loc_807087AC:
{
    r0 = -1;
}

loc_807087B0:
{
}

loc_807087B4:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(r0))) {
        goto loc_807087C0;
    }
}

loc_807087B8:
{
    r3 = (r30 + 136);
    goto loc_807087E8;
}

loc_807087C0:
{
    r4 = MemoryInline::FlatRead32((r30 + 140));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_807087C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807087E8;
    }
}

loc_807087CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807087D8;
    }
}

loc_807087D0:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_807087DC;
}

loc_807087D8:
{
    r0 = -1;
}

loc_807087DC:
{
}

loc_807087E0:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(r0))) {
        goto loc_807087E8;
    }
}

loc_807087E4:
{
    r3 = (r30 + 140);
}

loc_807087E8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807087EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708910;
    }
}

loc_807087F0:
{
    r3 = 0;
    goto loc_80708AF8;
}

loc_807087F8:
{
    r3 = 0;
    goto loc_80708AF8;
}

loc_80708800:
{
    r3 = 0;
    goto loc_80708AF8;
}

loc_80708808:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r30 + 128));
    r3 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80708814:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708838;
    }
}

loc_80708818:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708824;
    }
}

loc_8070881C:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_80708828;
}

loc_80708824:
{
    r0 = -1;
}

loc_80708828:
{
}

loc_8070882C:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(r0))) {
        goto loc_80708838;
    }
}

loc_80708830:
{
    r3 = (r30 + 128);
    goto loc_807088B8;
}

loc_80708838:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r30 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80708840:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708864;
    }
}

loc_80708844:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708850;
    }
}

loc_80708848:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_80708854;
}

loc_80708850:
{
    r0 = -1;
}

loc_80708854:
{
}

loc_80708858:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(r0))) {
        goto loc_80708864;
    }
}

loc_8070885C:
{
    r3 = (r30 + 132);
    goto loc_807088B8;
}

loc_80708864:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r30 + 136));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8070886C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708890;
    }
}

loc_80708870:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070887C;
    }
}

loc_80708874:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_80708880;
}

loc_8070887C:
{
    r0 = -1;
}

loc_80708880:
{
}

loc_80708884:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(r0))) {
        goto loc_80708890;
    }
}

loc_80708888:
{
    r3 = (r30 + 136);
    goto loc_807088B8;
}

loc_80708890:
{
    r4 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r30 + 140));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80708898:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807088B8;
    }
}

loc_8070889C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807088A8;
    }
}

loc_807088A0:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_807088AC;
}

loc_807088A8:
{
    r0 = -1;
}

loc_807088AC:
{
}

loc_807088B0:
{
    if ((static_cast<uint32_t>(r31) != static_cast<uint32_t>(r0))) {
        goto loc_807088B8;
    }
}

loc_807088B4:
{
    r3 = (r30 + 140);
}

loc_807088B8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807088BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708910;
    }
}

loc_807088C0:
{
    r3 = 0;
    goto loc_80708AF8;
}

loc_807088C8:
{
    r29 = r30;
    r28 = 0;
}

loc_807088D0:
{
    r3 = MemoryInline::FlatRead32((r29 + 128));
}

loc_807088D8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807088E4;
    }
}

loc_807088DC:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_807088E8;
}

loc_807088E4:
{
    r0 = -1;
}

loc_807088E8:
{
}

loc_807088EC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r31))) {
        goto loc_80708900;
    }
}

loc_807088F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807088F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708900;
    }
}

loc_807088F8:
{
    r4 = 0;
    ctx->lr = 0x80708900u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8008E330u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80708900:
{
    r28 = (r28 + 1);
    r29 = (r29 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(4));
}

loc_8070890C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807088D0;
    }
}

loc_80708910:
{
    r3 = (r30 + 148);
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x807028E4u) && KnownTranslatedCpuCall<0x807028E4u>::kAvailable && !KnownTranslatedCpuCall<0x807028E4u>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x807028E4u>()) {
        const auto state_free_result_807028E4_71D1 = func_807028E4_statefree_v0(xer);
        r0 = static_cast<uint32_t>(state_free_result_807028E4_71D1[0]);
        r3 = static_cast<uint32_t>(state_free_result_807028E4_71D1[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
        ctx->gpr[28] = r28;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[0] = f0;
        ctx->fpr[1] = f1;
        ctx->fpr[31] = f31;
        ctx->cr = cr;
        InvokeDirectCpu<0x807028E4u>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r6 = ctx->gpr[6];
        r28 = ctx->gpr[28];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f0 = ctx->fpr[0];
        f1 = ctx->fpr[1];
        f31 = ctx->fpr[31];
        cr = ctx->cr;
        xer = ctx->xer;
    }
}

loc_8070891C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80708928;
    }
}

loc_80708920:
{
    r29 = 0;
    goto loc_80708A2C;
}

loc_80708928:
{
    r3 = MemoryInline::FlatRead32((r30 + 128));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80708930:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8070893C;
    }
}

loc_80708934:
{
    r29 = (r30 + 128);
    goto loc_80708A08;
}

loc_8070893C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708948;
    }
}

loc_80708940:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_8070894C;
}

loc_80708948:
{
    r0 = -1;
}

loc_8070894C:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = MemoryInline::FlatRead32((r30 + 132));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80708958:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80708964;
    }
}

loc_8070895C:
{
    r29 = (r30 + 132);
    goto loc_80708A08;
}

loc_80708964:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708970;
    }
}

loc_80708968:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_80708974;
}

loc_80708970:
{
    r0 = -1;
}

loc_80708974:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = MemoryInline::FlatRead32((r30 + 136));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80708980:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8070898C;
    }
}

loc_80708984:
{
    r29 = (r30 + 136);
    goto loc_80708A08;
}

loc_8070898C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708998;
    }
}

loc_80708990:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_8070899C;
}

loc_80708998:
{
    r0 = -1;
}

loc_8070899C:
{
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = MemoryInline::FlatRead32((r30 + 140));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807089A8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807089B4;
    }
}

loc_807089AC:
{
    r29 = (r30 + 140);
    goto loc_80708A08;
}

loc_807089B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807089C0;
    }
}

loc_807089B8:
{
    r0 = MemoryInline::FlatRead32((r3 + 144));
    goto loc_807089C4;
}

loc_807089C0:
{
    r0 = -1;
}

loc_807089C4:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r4 = r31;
    r3 = (r30 + 148);
    r5 = (r1 + 8);
    r6 = 4;
    ctx->lr = 0x807089DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80702848u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_807089E0:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_807089EC;
    }
}

loc_807089E4:
{
    r29 = 0;
    goto loc_80708A08;
}

loc_807089EC:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r29 = (r30 + r0);
    r29 = (r29 + 128);
    r3 = MemoryInline::FlatRead32(r29);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807089FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708A08;
    }
}

loc_80708A00:
{
    r4 = 0;
    ctx->lr = 0x80708A08u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8008E330u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80708A08:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80708A0C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708A28;
    }
}

loc_80708A10:
{
    r3 = r30;
    r4 = r29;
    r5 = r31;
    r6 = 0;
    ctx->lr = 0x80708A24u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800A3E80u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80708A2C;
}

loc_80708A28:
{
    r29 = 0;
}

loc_80708A2C:
{
}

loc_80708A30:
{
    if ((static_cast<uint32_t>(r31) == static_cast<uint32_t>(408))) {
        goto loc_80708A50;
    }
}

loc_80708A34:
{
}

loc_80708A38:
{
    if ((static_cast<uint32_t>(r31) == static_cast<uint32_t>(383))) {
        goto loc_80708A50;
    }
}

loc_80708A3C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(761));
}

loc_80708A40:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708A74;
    }
}

loc_80708A44:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(407));
}

loc_80708A48:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708AA0;
    }
}

loc_80708A4C:
{
    goto loc_80708AF4;
}

loc_80708A50:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80708A54:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708AF4;
    }
}

loc_80708A58:
{
    r0 = MemoryInline::FlatRead32((r30 + 244));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80708A60:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708AF4;
    }
}

loc_80708A64:
{
    r3 = r29;
    r4 = (r0 | 1);
    ctx->lr = 0x80708A70u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80713C80u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    goto loc_80708AF4;
}

loc_80708A74:
{
    r4 = 0x808A0000u;
    r3 = r29;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 5936));
    r5 = 0;
    f0.d = PpcFmulsInline(f0.d, f31.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r4 = fctiwzword0;
    r4 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    ctx->lr = 0x80708A9Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80717C48u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_80708AF4;
}

loc_80708AA0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80708AA4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708AF4;
    }
}

loc_80708AA8:
{
    r3 = MemoryInline::FlatRead32((r30 + 220));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & 128);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80708ABC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708AF4;
    }
}

loc_80708AC0:
{
    r3 = MemoryInline::FlatRead32(r29);
}

loc_80708AC8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80708AD8;
    }
}

loc_80708ACC:
{
    r4 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 5936));
    // inline leaf 0x8008F610 (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 176), f1.d);
    // end of inlined leaf 0x8008F610
}

loc_80708AD8:
{
    r3 = MemoryInline::FlatRead32(r29);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80708AE0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80708AF4;
    }
}

loc_80708AE4:
{
    r4 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 5940));
    r4 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8008F560u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
}

loc_80708AF4:
{
    r3 = r29;
}

loc_80708AF8:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r0 = MemoryInline::FlatRead32((r1 + 68));
    f31.d = MemoryInline::FlatReadFloat64((r1 + 48));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    r28 = MemoryInline::FlatRead32((r1 + 32));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807082D8 func_807082D8 preserves=false fpr_mask=0x80000000
